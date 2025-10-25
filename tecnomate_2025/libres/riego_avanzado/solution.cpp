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


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m, k, p; cin >> n >> m >> k >> p;
    vector<ll> c(p); forn(i,p) cin >> c[i];

    vector<ll> riego(n*m);
    forn(r,n) forn(c,m) {
        ll h = min(r,n-k) - max(r-(k-1),0) + 1;
        ll w = min(c,m-k) - max(c-(k-1),0) + 1;
        riego[r*m + c] = h*w;
    }
    sort(all(c));
    sort(all(riego));
    
    ll ans = 0;
    while(sz(c) && sz(riego)) {
        ans += c.back() * riego.back();
        c.pop_back();
        riego.pop_back();
    }
    cout << ans << "\n";

    return 0;
}
