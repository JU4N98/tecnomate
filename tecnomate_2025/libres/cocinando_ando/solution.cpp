#include <bits/stdc++.h>
#define forr(i,a,b) for(int i=(a);i<(b);i++)
#define forn(i,n) forr(i,0,n)
#define dforn(i,n) for(int i=n-1;i>=0;i--)
#define forall(it,v) for(auto it=v.begin();it!=v.end();it++)
#define sz(c) ((int)c.size())
#define rsz resize
#define pb push_back
#define mp make_pair
#define lb lower_bound
#define ub upper_bound
#define fst first
#define snd second

#ifdef ANARAP
#define MAXN 100
#else
#define MAXN 10020
#endif

using namespace std;

typedef long long ll;
typedef pair<int,int> ii;
typedef pair<ll, ll> l2;

struct edge{
	int id;
	ll cost, prest;
};
vector<edge> g[MAXN];
int in[MAXN];
l2 val[MAXN];

queue<int> procesar;

void calcularCosto(){
	while(!procesar.empty()){
		int aux = procesar.front();
		procesar.pop();
		forall(it, g[aux]){
			in[it->id]--;
			if(val[aux].fst + it->cost < val[it->id].fst){
				val[it->id].fst = val[aux].fst+it->cost;
				val[it->id].snd = val[aux].snd+it->prest;
			}
			else if(val[aux].fst+it->cost == val[it->id].fst){
				val[it->id].snd = max(val[it->id].snd, val[aux].snd+it->prest);
			}
			if(in[it->id] == 0) procesar.push(it->id);
		}
	}
	return;
}

int main(){
	#ifdef ANARAP
		freopen("input.in", "r",stdin);
	#endif
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	map<string, int> idrecipe;
	int actual = 0;
	int B; cin >> B;
	int n; cin >> n;
	forn(i,n){
		string a, b, nada; cin >> a >> b >> nada;
		ll c, p; cin >> c >> p;
		int ida, idb;
		if(idrecipe.count(a)) ida=idrecipe[a];
		else {
			idrecipe[a]=actual;
			ida=actual;
			actual++;
		}
		if(idrecipe.count(b)) idb=idrecipe[b];
		else {
			idrecipe[b]=actual;
			idb=actual;
			actual++;
		}
		//~ cout << a << " " << ida << '\n';
		//~ cout << b << " " << idb << '\n';
		edge nedge;
		nedge.id=ida;
		nedge.cost=c;
		nedge.prest=p;
		in[ida]++;
		g[idb].pb(nedge);	
	}
	forn(i,actual){
		if(in[i] == 0){
			 val[i] = {0,0};
			procesar.push(i);
		 }
		else val[i] = {LLONG_MAX, LLONG_MAX};
	}
	calcularCosto();
	
	vector<ll> dp(B+1,0);
	dforn(i,actual)for(int b = B; b >= val[i].fst; --b)
	{
		dp[b] = max(dp[b], dp[b-val[i].fst] + val[i].snd);
	}
	ll ans = -1, cost;
	forn(i,B+1) if(dp[i] > ans)
	{
		ans = dp[i];
		cost = i;
	}
	cout << ans << '\n' << cost << '\n';
	return 0;
	
}
