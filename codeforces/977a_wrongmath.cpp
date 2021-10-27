/* In the name of allah */
//Welcome to my castle. Population: 01
//kind of lonely here...

#include <bits/stdc++.h>
using namespace std;

int n, k;

int main(){
    cin >> n >> k;
    while(k--){
        n = (n % 10 == 0)? n / 10: n - 1;
    }
    cout << n;
}