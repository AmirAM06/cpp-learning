/* In the name of allah */
//Welcome to my castle. Population: 01
//kind of lonely here...
#include <bits/stdc++.h>
using namespace std;

int k, n;
int main(){
    cin >> n >> k;
    int arr[n];
    int j = 1;
    int roof = (n % 2)? n / 2 + 1 : n / 2;
    for (int i = 0; i < n; i++){
        if(i < roof){
            arr[i] = 2 * i + 1;
        }
        else{
            arr[i] = 2 * j;
            j++;
        }
    }
    cout << arr[k - 1];

    return 0;
}