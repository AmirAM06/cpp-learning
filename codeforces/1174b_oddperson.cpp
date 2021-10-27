/* In the name of God */
//Welcome to my castle. Population: 01
//kind of lonely here...

#include <bits/stdc++.h>
using namespace std;

bool ex[2];
int arr[100005];

int main(){

    int n;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> arr[i];
        ex[arr[i] % 2] = 1;
    }
    if (ex[0] && ex[1]) sort(arr, arr+n);
    for (int i = 0; i < n; i++) cout << arr[i] << ' ';
}