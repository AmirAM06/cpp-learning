/* In the name of allah */
//Welcome to my castle. Population: 01
//kind of lonely here...

#include <bits/stdc++.h>
using namespace std;

char in[100];
int check[27];
int l = 0;

int main(){
    cin >> in;
    while(in[l] != 0){
        l++;
    }
    for (int i = 0; i < l; i++){
        for(int j = 0; j < 26; j++){
            if (in[i] == 'a' + j){
                check[j] = 1;
            }
        }
    }
    for (int i = 0; i < 26; i++){
        //cout << 'a' + i << ':' << check[i] << '\n';
        check[26] += check[i];
    }
    string out = (check[26] % 2)? "IGNORE HIM!\n": "CHAT WITH HER!\n";
    cout << out;
    return 0;
}
