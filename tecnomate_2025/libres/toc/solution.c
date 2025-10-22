/**
 * CTU Open 2017
 * Problem Solution: Amusement Anticipation
 * Idea: Try all possible starts of an arithmetic sequence - O(n^2) solution, but should pass
 * @author Josef Malik
 */

#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <sstream>
#include <map>
#include <set>
#include <queue>
#include <vector>

using namespace std;

typedef long long int ll;
typedef pair<int, int> pii;

#define PB push_back
#define MP make_pair

#define FOR(prom, a, b) for(int prom = (a); prom < (b); prom++)
#define FORD(prom, a, b) for(int prom = (a); prom > (b); prom--)
#define FORDE(prom, a, b) for(int prom = (a); prom >= (b); prom--)
#define R1(a) do{scanf("%d", &(a));}while(0)
#define R2(a, b) do{scanf("%d%d", &(a), &(b));}while(0)
#define R3(a, b, c) do{scanf("%d%d%d", &(a), &(b), &(c));}while(0)
#define SV(vec) do{int s_v_;scanf("%d", &(s_v_));vec.PB(s_v_);}while(0)
#define MM(co, cim) memset((co), (cim), sizeof((co)))
#define DEB(x) cerr << ">>> " << #x << " : " << x << endl;
#define INF 1000000007

int n, a[1014], d;
bool good;

int main ()
{
  while (scanf("%d", &n) != -1)
  {
    FOR(i, 0, n) R1(a[i]);
    if (n <= 2) printf("1\n");
    else
    {
      FOR(i, 0, n - 1)
      {
        d = a[i + 1] - a[i];
        good = true;
        FOR(j, i + 2, n) if (a[j] - a[j - 1] != d) good = false;
        if (good)
        {
          printf("%d\n", i + 1);
          break;
        }
      }
    }
  }
  return 0;
}