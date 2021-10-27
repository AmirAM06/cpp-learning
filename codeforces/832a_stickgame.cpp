/* In the name of allah */
//Welcome to my castle. Population: 01
//kind of lonely here...
#include <bits/stdc++.h>
using namespace std;

long long n, k;
int main(){
    cin >> n >> k;
    if((n / k) % 2 == 0){
        cout << "NO";
    }
    else
        cout << "YES";
}