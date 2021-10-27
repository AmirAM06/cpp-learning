#include <bits/stdc++.h>
using namespace std;


//esmash rushe
void factor(long long n){
    for (long long i = 2; i * i <= n; i++){
        while (n % i == 0){
            cout << i << " ";
            n /= i;
        }
    }
    if (n != 1){
        cout << n << '\n';
    }
}

long long n;
int main(){
    cin >> n;
    factor(n);
    return 0;
}