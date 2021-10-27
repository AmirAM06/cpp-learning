#include <bits/stdc++.h>
using namespace std;


//is it prime?
bool isprime(long long n){
    if (n == 2){
        return 1;
    }
    if (n % 2 == 0 || n == 1){
        return 0;
    }


    for (long long i = 3; i * i <= n;){
        if (n % i == 0){
            return 0;
        }
        i += 2;
    }

    return 1;
}

long long n;
int main(){
    cin >> n;
    if (isprime(n)){
        cout << "prime";
    }else{
        cout << "Not prime";
    }
    return 0;
}