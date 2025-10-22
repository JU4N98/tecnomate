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
#define ALL(x) x.begin(), x.end()

#ifdef ANARAP
//prueba
#else
//real
#endif

using namespace std;

typedef long long ll;
typedef pair<int,int> ii;

typedef int td; typedef vector<int> vi; typedef vector<td> vd;
const td INF=1e9;//for maximum set INF to 0, and negate costs
bool zero(td x){return x==0;}//change to x==0, for ints/ll
struct Hungarian{
    int n; vector<vd> cs; vi L, R;
    Hungarian(int N, int M):n(max(N,M)),cs(n,vd(n)),L(n),R(n){
        forn(x,N)forn(y,M)cs[x][y]=INF;
    }
    void set(int x,int y,td c){cs[x][y]=c;}
	td assign() {
		int mat = 0; vd ds(n), u(n), v(n); vi dad(n), sn(n);
		forn(i,n)u[i]=*min_element(ALL(cs[i]));
		forn(j,n){v[j]=cs[0][j]-u[0];forr(i,1,n)v[j]=min(v[j],cs[i][j]-u[i]);}
		L=R=vi(n, -1);
		forn(i,n)forn(j,n)
			if(R[j]==-1&&zero(cs[i][j]-u[i]-v[j])){L[i]=j;R[j]=i;mat++;break;}
		for(;mat<n;mat++){
		    int s=0, j=0, i;
		    while(L[s] != -1)s++;
		    fill(ALL(dad),-1);fill(ALL(sn),0);
		    forn(k,n)ds[k]=cs[s][k]-u[s]-v[k];
		    for(;;){
		        j = -1;
		        forn(k,n)if(!sn[k]&&(j==-1||ds[k]<ds[j]))j=k;
		        sn[j] = 1; i = R[j];
		        if(i == -1) break;
		        forn(k,n)if(!sn[k]){
		            auto new_ds=ds[j]+cs[i][k]-u[i]-v[k];
		            if(ds[k] > new_ds){ds[k]=new_ds;dad[k]=j;}
		        }
		    }
		    forn(k,n)if(k!=j&&sn[k]){auto w=ds[k]-ds[j];v[k]+=w,u[R[k]]-=w;}
		    u[s] += ds[j];
		    while(dad[j]>=0){int d = dad[j];R[j]=R[d];L[R[j]]=j;j=d;}
		    R[j]=s;L[s]=j;
		}
		td value=0;forn(i,n)value+=cs[i][L[i]];
		return value;
	}
};

int mhdist(ii a, ii b){
	return abs(a.fst-b.fst)+abs(a.snd-b.snd);
}

int main()
{
	#ifdef ANARAP
		freopen("input.in", "r", stdin);
		//freopen("output.out", "w", stdout);
		unsigned t0, t1; t0=clock();
	#endif
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n,m; cin >> n >> m;
	vector<ii> bot(n), rep(m);
	forn(i,n) cin >> bot[i].fst >> bot[i].snd;
	forn(i,m) cin >> rep[i].fst >> rep[i].snd;
	ii rest; cin >> rest.fst >> rest.snd;
	Hungarian hung = Hungarian(n,m+n-1);
	forn(i,n){
		int com = abs(bot[i].fst-rest.fst)+abs(bot[i].snd-rest.snd);
		forn(j,m+n-1){
			if(j>=m) hung.set(i,j,com*2);
			else hung.set(i,j,mhdist(bot[i], rep[j])+com);
		}
	}
	
	cout << hung.assign() << '\n';
	 
	#ifdef ANARAP
	t1 = clock();double time = (double(t1-t0)/CLOCKS_PER_SEC); cout << "Execution Time: " << time << endl;
	#endif
	return 0;
}
 
