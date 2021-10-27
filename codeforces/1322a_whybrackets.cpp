/* In the name of God */
//Welcome to my castle. Population: 01
//kind of lonely here...

#include <bits/stdc++.h>
using namespace std;
 
//ns for nanoseconds
long long n , x = 0 , l , r , ns = 0;
string s;
 
void solve(){
    cin >> n >> s;
 
    for(int i = 0 ; i < n ; i++){
        if(s[i] == '(') x++;
        else x--;
        if(x < 0 || (x == 0 && s[i] == '(')){
            ns++;
        }
    }
    cout << (x == 0? ns : -1);
 
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    solve();

    return 0;
}