/* In the name of allah */
//Welcome to my castle. Population: 01
//kind of lonely here...

#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1000;

int n;

int main(){
    cin >> n;
    vector< pair<int, int> > o(n), c(n), loc(n);
    for (int i = 0; i < n; i++){
        int a, b;
        cin >> a >> b;
        o[i] = {a, b};
    }

    for (int i = 0; i < n; i++){
        int a, b;
        cin >> a >> b;
        c[i] = {a, b};
    }

    sort(o.begin(), o.end());
    sort(c.begin(), c.end());
    reverse(c.begin(), c.end());
    
    for(int i = 0; i < n; i++){
        loc[i] = {o[i].first + c[i].first, o[i].second + c[i].second};
        //cout << loc[i].first << ' ' << loc[i].second;
    }
    sort(loc.begin(), loc.end());
    cout << loc[0].first << ' ' << loc[n - 1].second;

    
    return 0;
}