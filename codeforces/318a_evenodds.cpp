/* In the name of allah */
//Welcome to my castle. Population: 01
//kind of lonely here...
#include <bits/stdc++.h>
using namespace std;

long long k, n;
int main(){
    cin >> n >> k;
    int roof = (n % 2)? n / 2 + 1: n / 2;
    if (k <= roof){ 
        cout << 2 * k - 1;
    }else{
        //roof = (k - roof == 0)? roof - 1: roof;
        cout << 2 * (k - roof);
    }
}