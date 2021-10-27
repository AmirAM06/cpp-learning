/* In the name of allah */
//Welcome to my castle. Population: 01
//kind of lonely here...

#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1000 + 16;

int n, p, maxp;
pair <int, int> s[MAXN]; 
int main(){
    cin >> n;
    for (int i = 0; i < n; i++){
        int a, b;
        cin >> a >> b;
        s[i] = {a, b};
    }

    for (int i = 0; i < n; i++){
        p = p - s[i].first;
        p = p + s[i].second;
        maxp = (p > maxp)? p : maxp;
    }
    cout << maxp;
}