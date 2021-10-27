#include <bits/stdc++.h>
using namespace std;

char in[1000];
int n = 0;
int main(){
    cin >> in;
    while(in[n] != 0){
        n++;
    }
    in[0] = (in[0] <= 'z' && in[0] >= 'a')? in[0] + ('A' - 'a'): in[0];
    for(int i = 0; i < n; i++){
        cout << in[i];
    }
}