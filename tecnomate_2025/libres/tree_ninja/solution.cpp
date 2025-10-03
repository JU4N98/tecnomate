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
#define all(v) v.begin(), v.end()
using namespace std;

typedef long long ll;
typedef pair<int, int> ii;

typedef long long T;
typedef long double ld;
const T EPS = 0; 
const T INF = 1e18;

struct pto{
	T x, y, id;
	pto() : x(0), y(0) {}
	pto(T _x, T _y) : x(_x), y(_y) {}
	pto operator+(pto b) { return pto(x+b.x, y+b.y); }
	pto operator-(pto b) { return pto(x-b.x, y-b.y); }
	pto operator+(T k) { return pto(x+k, y+k); }
	pto operator*(T k) { return pto(x*k, y*k); }
	pto operator/(T k) { return pto(x/k, y/k); }
	T operator*(pto b) { return x*b.x + y*b.y; }
	T operator^(pto b) { return x*b.y - y*b.x; }
	bool operator<(const pto &b) const {
		return x < b.x-EPS || (abs(x - b.x) <= EPS && y < b.y-EPS);
	}
	bool operator==(pto b){ return abs(x-b.x)<=EPS && abs(y-b.y)<=EPS; }
};

struct cmp {
  pto o, v;
  cmp(pto no, pto nv) : o(no), v(nv) {}
  bool half(pto p) {
    assert(!(p.x == 0 && p.y == 0));  
    return (v ^ p) < 0 || ((v ^ p) == 0 && (v * p) < 0);
  }
  bool operator()(pto& p1, pto& p2) {
    return mp(half(p1 - o), T(0)) < mp(half(p2 - o), ((p1 - o) ^ (p2 - o)));
  }
};

int solve(int n, pto o, vector<pto> &evs) {
  cmp c = cmp(o, pto(1,0));
  sort(all(evs), c);
  vector<bool> used(n,false);
  int ans = 0, cur = 0;
  forn(i,sz(evs)) {
    int j = i;
    while(j < sz(evs) && !c(evs[i], evs[j])) j++;
    forr(k,i,j) {
      cur += !used[evs[k].id];
      used[evs[k].id] = !used[evs[k].id];
    }
    forr(k,i,j) 
      cur -= !used[evs[k].id];
    
    ans = max(ans, cur);
    i = j-1;
  }
  return ans;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  
  int n; cin >> n;
  vector<pto> pts(n);
  forn(i,n) {
    cin >> pts[i].x >> pts[i].y;
  }

  vector<ii> edges;
  forn(i,n-1) {
    int u, v; cin >> u >> v; u--; v--;
    edges.pb({u,v});
  }

  int ans = 0;
  vector<pto> evs;
  forn(i,n) {
    int cur = 1;
    forn(j,n-1) {
      if(edges[j].fst == i || edges[j].snd == i) {
        cur++;
      } else {
        pto u = pts[edges[j].fst];
        pto v = pts[edges[j].snd];
        pto nu = u * -1;
        pto nv = u * -1;
        u.id = v.id = nu.id = nv.id = j; 
        evs.pb(u);
        evs.pb(v);
        evs.pb(nu);
        evs.pb(nv);
      }
    }
    cur += solve(n, pts[i], evs);
    ans = max(ans, cur);
    evs.clear();
  }
  cout << ans << "\n";

  return 0;
}
