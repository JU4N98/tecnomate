#include <bits/stdc++.h>
#define forr(i, a, b) for (int i = (a); i < (b); i++)
#define forn(i, n) forr(i, 0, n)
#define dforn(i, n) for (int i = (n) - 1; i >= 0; i--)
#define forall(it, v) for (auto it = v.begin(); it != v.end(); it++)
#define sz(c) ((int)c.size())
#define rsz resize
#define pb push_back
#define mp make_pair
#define lb lower_bound
#define ub upper_bound
#define fst first
#define snd second
using namespace std;

typedef long long ll;
typedef pair<int, int> ii;

const ll INF_FLOW =  1e14;

struct Edge {
  int u, v;
  ll cap, flow;
  Edge() {}
  Edge(int uu, int vv, ll c) : u(uu), v(vv), cap(c), flow(0) {}
};
struct Dinic {
  int N;
  vector<Edge> E;
  vector<vector<int>> g;
  vector<int> d, pt;
  Dinic(int n) : N(n), g(n), d(n), pt(n) {}  // clear and init
  void addEdge(int u, int v, ll cap) {
    if (u != v) {
      g[u].pb(sz(E));
      E.pb({u, v, cap});
      g[v].pb(sz(E));
      E.pb({v, u, 0});
    }
  }
  bool BFS(int S, int T) {
    queue<int> q({S});
    fill(d.begin(), d.end(), N + 1);
    d[S] = 0;
    while (!q.empty()) {
      int u = q.front();
      q.pop();
      if (u == T) break;
      for (int k : g[u]) {
        Edge& e = E[k];
        if (e.flow < e.cap && d[e.v] > d[e.u] + 1) {
          d[e.v] = d[e.u] + 1;
          q.push(e.v);
        }
      }
    }
    return d[T] != N + 1;
  }
  ll DFS(int u, int T, ll flow = -1) {
    if (u == T || flow == 0) return flow;
    for (int& i = pt[u]; i < sz(g[u]); ++i) {
      Edge& e = E[g[u][i]];
      Edge& oe = E[g[u][i] ^ 1];
      if (d[e.v] == d[e.u] + 1) {
        ll amt = e.cap - e.flow;
        if (flow != -1 && amt > flow) amt = flow;
        if (ll pushed = DFS(e.v, T, amt)) {
          e.flow += pushed;
          oe.flow -= pushed;
          return pushed;
        }
      }
    }
    return 0;
  }
  ll maxFlow(int S, int T) {  // O(V^2*E), unit nets: O(sqrt(V)*E)
    ll total = 0;
    while (BFS(S, T)) {
      fill(pt.begin(), pt.end(), 0);
      while (ll flow = DFS(S, T)) total += flow;
    }
    return total;
  }
};

const int INF_DIST = 1000000;

int G[200][200];
void floyd(int n) {  // O(N^3)
  forn(k, n) forn(i, n) if (G[i][k] != INF_DIST) forn(j, n) if (G[k][j] != INF_DIST)
      G[i][j] = min(G[i][j], G[i][k] + G[k][j]);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll c, p, t, M;
    cin >> c >> p >> t >> M;
    vector<ll> dem(c), prod(p);
    ll sum = 0;
    forn(i,c) {
        cin >> dem[i];
        sum += dem[i];
    }
    forn(i,p) cin >> prod[i];
    
    forn(i,c+p) forn(j, c+p) G[i][j] = INF_DIST;
    forn(i,t) {
        int u, v; cin >> u >> v; 
        int minu; cin >> minu;
        u--, v--;
        G[u][v] = minu;
        G[v][u] = minu;
    }
    floyd(c+p);

    int l = 1, r = M+1;
    while(l<r) {
        int m = (l+r)/2;
        Dinic dinic(c+p+2);
        forn(i,p) forn(j,c) if(G[i+c][j] <= m) dinic.addEdge(i+c, j, INF_FLOW);
        forn(i,p) dinic.addEdge(c+p, i+c, prod[i]);
        forn(i,c) dinic.addEdge(i, c+p+1, dem[i]);
        ll maxFlow = dinic.maxFlow(c+p, c+p+1);
        if(maxFlow == sum) r = m;
        else l = m+1;
    }

    if(l == M+1) cout << "DESPEDIDO\n";
    else cout << l << "\n";

    return 0;
}
