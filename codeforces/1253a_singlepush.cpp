/* In the name of God */
//Welcome to my castle. Population: 01
//kind of lonely here...

#include <bits/stdc++.h>
using namespace std;
const int maxn = 1e5 + 16;
int test;
bool out[maxn];

bool pushable(int n){
    int a[maxn], b[maxn], d[maxn], l = -1, r = -1, k = 0;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    for(int i = 0; i < n; i++){
        cin >> b[i];
        d[i] = b[i] - a[i];
    }

    /*for(int i = 0; i < n; i++){
        cout << d[i] << ' ';
    }
    cout << '\n';*/
    for(int i = 0; i < n; i++){
        if(d[i] > 0 && r == -1){
            r = i;
            k = d[i];
        }
        if(d[i] == 0 && r != -1 && l == -1) l = i - 1;
        if(d[i] != k && d[i] != 0) return false;
        if(l != -1 && d[i] != 0) return false;
        //cout << r << ' ' << l << ' ' << k << '\n';
    }
    //cout << r << ' ' << l << ' ' << k << '\n';
    return true;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    cin >> test;
    for(int t = 0; t < test; t++){
        int n = 0;
        cin >> n;
        out[t] = pushable(n);
    }
    for(int i = 0; i < test; i++){
        cout << (out[i]? "YES\n" : "NO\n");
    }
    
}