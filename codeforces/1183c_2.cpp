/* In the name of God */
//Welcome to my castle. Population: 01
//kind of lonely here...

#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 16;

int test, out[N];

int games(int k, int n, int a, int b){
    cout << k / a - 1 << '\n' << (k % a + a)/ b << '\n';
    int tempa, tempb;
    if(a > k){
        tempa = k / a - 1;
        k -= k % a + a;
        n -= tempa;
    }
    if(b > k){
        tempb = k / b;
        k -= k % b;
        n -= tempb; 
    }
    if(k < 0 || n > 0){
        return -1;
    }
    return tempa;
}

int main(){
    cin >> test;
    for(int t = 0; t < test; t++){
        int a, b, n, k;
        cin >> k >> n >> a >> b;
        out[t] = games(k, n, a, b);
    }
    for(int i = 0; i < test; i++){
        cout << out[i] << '\n';
    }
    
}