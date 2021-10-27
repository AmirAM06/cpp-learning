/* In the name of God */
//Welcome to my castle. Population: 01
//kind of lonely here...
 
#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e5 + 16;
int test;
pair <long long, long long> out[MAXN];
 
pair <long long, long long> solve(int n){
    long long m = 0, k = 0, mx = 0, mn = 1e9 - 10 + 10;
    long long arr[MAXN];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        if(arr[i] != -1){
            mx = max(mx, arr[i]);
            mn = min(mn, arr[i]);
        }
    }
 
    k = ((mn + mx) % 2 == 0)? (mn + mx) / 2 : (mn + mx) / 2 + 1;
    arr[n - 1] = (arr[n - 1] == -1)? k : arr[n - 1];
    for(int i = 0; i < n - 1; i++){
        int temp = (arr[i] == -1)? k : arr[i];
        cout << arr[i] << ' ';
        m = max(m, abs(arr[i + 1] - temp));
    }
    cout << arr[n - 1];
 
    return {m, k};
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> test;
    for(int t = 0; t < test; t++){
        int temp;
        cin >> temp;
        out[t] = solve(temp);
    }
    for(int i = 0; i < test; i++) cout << out[i].first << ' ' << out[i].second << '\n';
 
    return 0;
}