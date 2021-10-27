#include <bits/stdc++.h>
using namespace std;

string in;
int n, out = 0;

int main(){
    cin >> n >> in;
    for (int i = 0; i < n - 1; i++){
        if(in[i] == in [i+1]){
            out++;
        }
    }
    cout << out;
    return 0;
}