/* In the name of God */
//Welcome to my castle. Population: 01
//kind of lonely here...

#include <bits/stdc++.h>
using namespace std;
const int MAXN = 100 + 64;

int n;
int arr[MAXN];
int out, a, b, ones = 0;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        if(arr[i] == 1) ones++;
    }

    for(int i = n - 1; i >= 0; i--){
        a = 0;
        b = 0;
        for(int j = i; j >= 0; j--){
            if(arr[j] == 0) b++;
            if(arr[j] == 1) a++;
            out = max(out, (ones + (b - a)));
            //cout << "\na: " << a << " b: " << b << " i: " << i << " out: " << out;
        }
    }
    cout << out;
    return 0;
}