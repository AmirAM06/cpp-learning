//besmellah
#include <bits/stdc++.h>
using namespace std;

const int maxn = 1e6 + 78;
int a[maxn];

int bs (int l, int r) {
    if (r == l + 1) return l;
    int m = (l + r) / 2;
    if (a[m]) return bs(m, r);
    else return bs(l, m);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    cout << bs(0, n);
}