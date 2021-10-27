//besmellah
#include <bits/stdc++.h>
using namespace std;

const int maxn = 2e5 + 25;
int a[maxn];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a, a + n);
    while (m--) {
        int x;
        cin >> x;
        cout << upper_bound(a, a + n, x) - a << ' ';
    }
}
/* upper_bound(a, a + n, x):
addres avvalin khune kuchiktar mosavi x touye array a be toul n ro mide
lower_bound(a, a + n, x):
address avvalin khune bozorgtar mosvai x tuye array a be toul n ro mide
*/