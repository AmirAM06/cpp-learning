/* In the name of God */
//Welcome to my castle. Population: 01
//kind of lonely here...

#include <bits/stdc++.h>
using namespace std;

int l = 0;
char a[100], b[100], out[100];

int main(){
    cin >> a;
    cin >> b;
    while(a[l] != 0){
        if(a[l] == b[l]) out[l] = '0';
        else out[l] = '1';
        l++;
    }
    for (int i = 0; i < l; i++) cout << out[i];
}