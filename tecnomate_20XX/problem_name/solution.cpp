#include<bits/stdc++.h>
using namespace std;

int gauss(int n) {
    return n * (n+1) / 2;
}

int main () {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n; cin >> n;
    cout << gauss(n) << "\n";

    return 0;
}
