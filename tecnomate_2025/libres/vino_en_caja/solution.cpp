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
#define test_case int tttt; cin >> tttt; while(tttt--)
#define all(v) v.begin(), v.end()

#ifdef ANARAP
// local
#else
// judge
#endif

using namespace std;

typedef long long ll;
typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<string> vc;
typedef vector<ll> vll;
typedef vector<ii> vii;
typedef vector<bool> vb;

typedef long double ld;

int main() {
		// agregar g++ -DANARAP en compilacion
#ifdef ANARAP
		freopen("input.in", "r", stdin);
		// freopen("output.out","w", stdout);
#endif
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	ld N,P,T;
	cin>>N>>P>>T;
	vector<vector<ld>> dp(T+1,vector<ld>(N+1));
	dp[0][0]=1;
	forn(i,T){
		forn(j,N){
			dp[i+1][j+1]+=dp[i][j]*P;
			dp[i+1][j]+=dp[i][j]*(1-P);
		}
		dp[i+1][N]+=dp[i][N];
	}
	ld ans=0;
	
	forn(i,N+1){
		ans+=(i*dp[T][i]);
	}
	cout<<fixed<<setprecision(15)<<ans<<'\n';
	return 0;
}