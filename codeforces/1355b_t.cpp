/* In the name of God */
//Welcome to my castle. Population: 01
//kind of lonely here...

#include <bits/stdc++.h>
using namespace std;

 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        vector <int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        int ans = 0, temp = 0;
        for (int i = 0; i < n; i++) {
            if (++temp == a[i]) {
                ans++;
                temp = 0;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}