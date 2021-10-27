/* In the name of God */
//Welcome to my castle. Population: 01
//kind of lonely here...

#include <bits/stdc++.h>
using namespace std;
const int MAXN = 2 * 1e5 + 64;

int n, arr[MAXN], k, x;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    cin >> n >> k;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    sort(arr, (arr + n));
    x = arr[k];
    if(arr[k - 1] < arr[k]) cout << arr[k - 1];
    else cout << -1;

    return 0;
}