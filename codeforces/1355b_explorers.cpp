/* In the name of God */
//Welcome to my castle. Population: 01
//kind of lonely here...

#include <bits/stdc++.h>
using namespace std;
const int MAXN = 2 * 1e5;

int t;
int arr[MAXN];

int solve(int n){
    int out = 0;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    sort(arr, (arr + n));
    for(int i = n - 1; i >= 0;){
        out++;
        //cout << arr[i] << '\n';
        i -= arr[i];
    }
    return out;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> t;
    for(int i = 0; i < t; i++){
        int n;
        cin >> n;
        cout << solve(n) << '\n';
    }
    
    return 0;
}