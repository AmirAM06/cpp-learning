/* In the name of God */
//Welcome to my castle. Population: 01
//kind of lonely here...

#include <bits/stdc++.h>
using namespace std;

int n;
vector < pair<int, int>> arr;
int dp[3][3];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> n;
    for(int i = 0; i < n; i++){
        int a, b;
        cin >> a >> b;
        arr.push_back({a, b});
    }

    /*
    prev state: 0
    current state: 1
    --------------------------
    tree doesn't fall: 0
    tree falls backwards: 1
    tree falls forward: 2
    */
    
    dp[1][0] = 0;
    dp[1][1] = 1;
    dp[1][2] = (arr[0].second > arr[1].first - arr[0].first)? 1 : -1e2;

    for(int i = 1; i < n; i++){
        dp[0][0] = dp[1][0];
        dp[0][1] = dp[1][1];
        dp[0][2] = dp[1][2];

        dp[1][0] = max({dp[0][0], dp[0][1], dp[0][2]});
        if(arr[i].first + arr[i].second < arr[i + 1].second){
            dp[1][2] = max({dp[0][0], dp[0][1], dp[0][2]}) + 1;
        }
        else dp[1][2] = -1e2;
        dp[1][1] = max(dp[0][0], dp[0][2]) + 1;
        if((arr[i].first - arr[i - 1].first) > (arr[i].second + arr[i - 1].second))
            dp[1][1] = max(dp[1][1], dp[0][2]);        
    }

    cout << max({dp[1][0], dp[1][1], dp[1][2]});

    return 0;    
}