/* In the name of God */
//Welcome to my castle. Population: 01
//kind of lonely here...

#include <bits/stdc++.h>
using namespace std;

const int MAXN = 3 * 1e5 + 1 + 16;
int n, k, arr[MAXN];
bool status = false;

int main(){
    cin >> n;
    for (int i = 1; i <= n; i++){
        cin >> arr[i];
    }
    for(int i = 0; i < n; i++){
        int temp = arr[i];
        if(arr[i] != i){
            if(2*(abs(temp - i)) >= n){
                swap(arr[i], arr[temp]);
            }
            else if(temp >= n/2 && i >= n/2){
                swap(arr[i], arr[1]);
                swap(arr[1], arr[temp]);
                swap(arr[1], arr[i]);
            }
            else if(temp >= n/2 && i < n / 2){
                swap(arr[i], arr[1]);
                swap(arr[1], arr[n]);
                swap(arr[n], arr[temp]);
                swap(arr[n], arr[1]);
                swap(arr[1], arr[temp]);
            }
            else if(temp < n/2 && i < n/2){
                swap(arr[i], arr[n]);
                swap(arr[n], arr[temp]);
                swap(arr[i], arr[n]);
            }
            
        }
    }
    for(int i = 1; i <= n; i++){
        cout << arr[i] << ' ';
    }

    return 0;
}