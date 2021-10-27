#include <bits/stdc++.h>
using namespace std;

int n, a, b, c, out = 0;
int main(){
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> a >> b >> c;
        if (a + b + c >= 2){
            out++;
        }
    }
    cout << out;
}