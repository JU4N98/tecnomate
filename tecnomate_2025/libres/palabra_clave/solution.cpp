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

map<vector<int>,int> grundy;
int solve(vector<int> &cnt){
  sort(cnt.begin(), cnt.begin()+26);
  if(grundy.count(cnt)) return grundy[cnt];

  int rem = 0;
  forn(i, 26) rem += cnt[i];
  if(rem == 0) {
    grundy[cnt] = 0;
    return 0;
  }

  vector<bool> mex(30, 0);
  vector<int> aux = cnt;
  forn(i,27) {
    if(!cnt[i]) continue;
    if(rem == 1 && i == 26) continue;
    aux[i]--;
    if(i != 26 && aux[i] == 0) aux[26]++;
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
    vector<int> cnt(27,0);
    for(auto ki: k) cnt[ki-'A']++;
    forn(i, 26) cnt[26] += cnt[i]==0;
    cout << (solve(cnt) ? ":)" : ":(") << "\n";
  }

  return 0;
}
