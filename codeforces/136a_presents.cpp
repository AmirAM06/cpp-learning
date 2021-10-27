/* In the name of God */
//Welcome to my castle. Population: 01
//kind of lonely here...

#include <bits/stdc++.h>
using namespace std;
const int MAXN = 100 + 16;
int n, f[MAXN], o[MAXN];

int main(){
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> f[i];
    }
    for (int i = 0; i < n; i++){
        o[f[i] - 1] = i + 1;
    }
    for (int i = 0; i < n; i++){
        cout << o[i] << ' ';
    }
}