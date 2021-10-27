/* In the name of God */
//Welcome to my castle. Population: 01
//kind of lonely here...

#include <bits/stdc++.h>
using namespace std;

int t;

int solve(int n){
    int arr[n], s = 0, av = 0, out = 0;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        s += arr[i];
        av = s / n;
    }
    for(int i = 0; i < n; i++){
        for(int j = i; i < n; j++){
            if(((arr[i] + arr[j]) / 2) == av){
                out++;
            }
        }
    }
    return out;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> t;
    for(int i = 0; i < t; i++){
        int x;
        cin >> x;
        cout << solve(x) << '\n';
    }
}