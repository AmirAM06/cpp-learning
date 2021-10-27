/* In the name of God */
//Welcome to my castle. Population: 01
//kind of lonely here...

#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e5 + 16;

int b[MAXN], n, ans[MAXN];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> b[i];
    }
    //w for worst
    int w = 0;
    for(int i = 1; i <= n; i++){
        w = min(w, b[i] - i);
        ans[i] = i + w;
    }
    w = n + 1;
    for(int i = n; i >= 1; i--){
        w = min(w, b[i] + i);
        ans[i] = min(ans[i], w - i);
    }
    int a = 0;
    for(int i = 1; i <= n; i++){
        a = max(a, ans[i]);
    }
    cout << a;
    
    return 0;
}