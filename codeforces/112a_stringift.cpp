#include <bits/stdc++.h>
using namespace std;

char a[100], b[100];

int len(char a[100]){
    int i = 0;
    while (a[i] != 0){
        i++;
    }
    return i;
}

int main(){
    cin >> a >> b;
    int lena = len(a);
    int out = 0;

    for(int i = 0; i < lena; i++){
        a[i] = (a[i] <= 'Z' && a[i] >= 'A')? a[i] - ('A' - 'a'): a[i];
        b[i] = (b[i] <= 'Z' && b[i] >= 'A')? b[i] - ('A' - 'a'): b[i];
        if(a[i]-1+1 > b[i]-1+1){
            out = 1;
            break;
        }
        else if(a[i]-1+1 < b[i]-1+1){
            out = -1;
            break;
        }
    }
    cout << out;
    return 0;
}