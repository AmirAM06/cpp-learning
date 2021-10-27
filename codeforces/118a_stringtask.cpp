#include <bits/stdc++.h>
using namespace std;

char in[100], out[100];

int main(){
    
    cin >> in;
    int len = 0;
    while (in[len] != 0){
        ++len;
    }
    
    for(int i = 0; i < len; i++){
        if(in[i] <= 'Z' && in[i] >= 'A'){
            in[i] -= 'A' - 'a';
        }
        bool con = (in[i] != 'a') && (in[i] != 'o') && (in[i] != 'u') && (in[i] != 'y') && (in[i] != 'e') && (in[i] != 'i');
        if(con){
            cout << '.' << in[i];
        }
    }
    
    return 0;
}