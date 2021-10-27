/* In the name of allah */
//Welcome to my castle. Population: 01
//kind of lonely here...

#include <bits/stdc++.h>
using namespace std;

const int MAXLEN = 1e5+16;
int k, l, m, n;
long long d;
int harmed[MAXLEN];
int main(){
    cin >> k >> l >> m >> n >> d;
    harmed[d + 1] = 2;
    for (int i = 1; harmed[i] != 2; i++){
        if(i % k == 0 || i % l == 0 || i % m == 0 || i % n == 0){
            harmed[i - 1] = 1;
        }
    }
    int harm = 0;
    for (int i = 0; i < d; i++){
        harm += harmed[i];
    }
    if(harm == 0) {
        cout << 0;
        return 0;
    }
    else{
        cout << harm;
        return 0;
    }

}