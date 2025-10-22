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
 
ll gcd(ll a, ll b) {
	if (b == 0) return a;
	return gcd(b, a%b);
}
 
int main() {
	// agregar g++ -DANARAP en compilacion
#ifdef ANARAP
	freopen("input.in", "r", stdin);
	// freopen("output.out","w", stdout);
#endif
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	//test_case{
	ll N,M,K;
	cin>>N>>M>>K;
	if((2*N*M)%K==0){
		cout<<"SI"<<'\n';
		
		ll b,h,aux=gcd(N,K);
		if(aux==K){
			b=2*N/aux;
			K/=aux;
			h=M/K;
		}
		else{
			b=N/aux;
			K/=aux;
			h=2*M/K;
			
		}
		cout<<0<<" "<<0<<'\n';
		cout<<b<<" "<<0<<'\n';
		cout<<0<<" "<<h<<'\n';
		
	}
	else cout<<"NO\n";
	//};
	return 0;
}