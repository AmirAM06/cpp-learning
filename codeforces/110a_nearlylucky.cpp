/* In the name of allah */
//Welcome to my castle. Population: 01
//kind of lonely here...

#include <bits/stdc++.h>
using namespace std;
const long long MAXN = 1e18 + 16;

long long in;
int c;

int main(){
    cin >> in;
    while(in != 0){
        c = (in % 10 == 4 || in % 10 == 7)? c + 1: c;
        //cout << c << '\n' << in << '\n';
        in /= 10;
    }
    if(c == 7 || c == 4) cout << "YES";
    else cout << "NO";
}