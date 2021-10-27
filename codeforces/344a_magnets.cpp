/* In the name of God */
//Welcome to my castle. Population: 01
//kind of lonely here...

#include <bits/stdc++.h>
using namespace std;

int n, g = 1, m[100000];

int main(){
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> m[i];
    }
    for (int i = 0; i < n - 1; i++){
        if(m[i] % 10 == m[i + 1] / 10 % 10) g++;
    }
    cout << g;
    
}