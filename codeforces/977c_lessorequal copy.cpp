/* In the name of God */
//Welcome to my castle. Population: 01
//kind of lonely here...

#include<bits/stdc++.h>
using namespace std; 
const int MAXN = 2 * 1e6;

long long n , k , a[MAXN]; 
 
void solve(){
    cin >> n >> k;
    for(int i = 0 ; i < n ; i++) cin >> a[i];
    sort(a , a + n);
    if(k == 0) cout << (a[0] <= 1? -1 : 1);
    else cout << (a[k-1] == a[k]? -1 : a[k-1]);
}
 
int main(){
    solve();
    return 0;
}