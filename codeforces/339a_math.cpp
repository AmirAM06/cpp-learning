#include <bits/stdc++.h>
using namespace std;

char in[100];
int out[52];
int main(){
    cin >> in;
    int c = 0;
    while (in[c] != 0){
        c++;
    }
    int leno = (c % 2 == 0)? c / 2: c / 2 + 1;
    for(int i = 0; i < leno; i++){
        out[i] = in[2*i] - 48;
    }
    for (int i = 0; i < leno; i++){
        for (int j = 0; j < leno - 1; j++){
            if(out[j] > out[j+1]){
                swap(out[j], out[j+1]);
            }
        }
    }

    for (int i = 0; i < leno; i++){
        cout << out[i];
        (i < (leno - 1)) && cout << '+';
    }

    return 0;
}