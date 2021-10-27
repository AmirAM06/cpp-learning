
/* In the name of God */
//Welcome to my castle. Population: 01
//kind of lonely here...
 
#include <bits/stdc++.h>
using namespace std;
 
long long n, d;
vector <pair<long long, long long >> f;
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> n >> d;
    for(long long i = 0; i < n; i++){
        long long a, b;
        cin >> a >> b;
        f.push_back({a, b});
    }
 
    sort(f.begin(), f.end());
 
    long long maxf = 0, temp = 0, l = 0;
 
    for(long long r = 0; r < n; r++){
        //cout << f[l].first << ' ' << f[l].second << '\n';
        
        //end of good subarray
        if(f[r].first - f[l].first >= d){
            //cout << "yes" << '\n';
            maxf = max(maxf, temp);
            temp = 0;
            l++;
            r = l;
        }
 
        //sum of values
        temp += f[r].second;
 
        //cout << f[r].first << ' ' << f[l].first << '\n';
    }
    maxf = max(temp, maxf);
    cout << maxf;
    return 0;
}