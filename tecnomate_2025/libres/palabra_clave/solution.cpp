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

unordered_map<vector<int>,int> grundy;
int solve(vector<int> &cnt){
  sort(all(cnt));
  if(grundy.count(cnt)) return grundy[cnt];

  int rem = 0, rem2 = 0;
  forn(i, 26) {
    rem += cnt[i]>=2;
    rem2 += cnt[i]==2;
  }
  if(rem == 1 && rem2==1) {
    grundy[cnt] = 1;
    return 1;
  }

  vector<bool> mex(30, 0);
  vector<int> aux = cnt;
  forn(i,26) {
    if(!cnt[i]) continue;
    aux[i]--;
    mex[solve(aux)] = 1;
    aux = cnt;
  }

  forn(i, 30) if(!mex[i]) {
    grundy[cnt] = i; 
    return i;
  }
  assert(0);
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int t; cin >> t;
  while(t--) {
    string k; cin >> k;
    vector<int> cnt(26,1);
    for(auto ki: k) cnt[ki-'A']++;
    cout << (solve(cnt) ? ":)" : ":,(") << "\n";
  }

  return 0;
}
