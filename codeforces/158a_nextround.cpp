#include <bits/stdc++.h>
using namespace std;


int n, k, a[50];

int main(){
    cin >> n >> k;
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    int s = 0;
    for (int j = 0; (a[j] >= a[k - 1]) && (a[j] > 0) && (j < n); j++){
        //cout << a[j] << ", " << k-1 << '\n';
        s = j + 1;
    }
    cout << s;
}