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

typedef int tipo;
const tipo neutro = 0;
tipo oper(const tipo& a, const tipo& b) { return max(a, b); }
struct ST {
  int sz;
  vector<tipo> t;
  ST(int n) {
    sz = 1 << (32 - __builtin_clz(n));
    t = vector<tipo>(2 * sz, neutro);
  }
  tipo& operator[](int p) { return t[sz + p]; }
  void updall() { dforn(i, sz) t[i] = oper(t[2 * i], t[2 * i + 1]); }
  tipo get(int i, int j) { return get(i, j, 1, 0, sz); }
  tipo get(int i, int j, int n, int a, int b) {
    if (j <= a || b <= i) return neutro;
    if (i <= a && b <= j) return t[n];
    int c = (a + b) / 2;
    return oper(get(i, j, 2 * n, a, c), get(i, j, 2 * n + 1, c, b));
  }
  void set(int p, tipo val) {
    p += sz;
    while (p > 0 && t[p] != val) {
      t[p] = val;
      p /= 2;
      val = oper(t[p * 2], t[p * 2 + 1]);
    }
  }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n; cin >> n;
    vector<char> op(n);
    vector<int> e(n);
    forn(i,n) cin >> op[i] >> e[i];

    vector<int> sum(n+1);
    vector<int> elo(n+1);
    dforn(i,n) {
        if(op[i] == '=') {
            sum[i] = sum[i+1];
            if(e[i] > 0) 
                elo[i] = e[i] + sum[i];
            else
                elo[i] = sum[i];
        }else{
            if(e[i] > 0) sum[i] = e[i];
            sum[i] += sum[i+1];
            elo[i] = sum[i];
        }
    }

    ST st(n);
    forn(i,n) st[i] = elo[i];
    st.updall();
 
    int q; cin >> q;
    forn(i,q) {
        int l, r; cin >> l >> r;
        l--;
        cout << st.get(l,r) - sum[r] << "\n";
    }

    return 0;
}
