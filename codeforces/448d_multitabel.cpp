/* In the name of God */
//Welcome to my castle. Population: 01
//kind of lonely here...

#include <bits/stdc++.h>
using namespace std;
long long n , m , k;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    cin >> n >> m >> k;
    long long r = n * m + 1 , l = 1;

    while(l < r){
        long long mid = (l + r) / 2;
        long long t = 0;
 
        for(long long i = 1 ; i <= n ; i++){
            //cout << t << '\n';
            t += min(m , (mid - 1) / i);
        } 
        if(t < k)
            l = mid + 1;
 
        else
            r = mid;
    }
    cout << l - 1 << endl;
    return 0;
}
