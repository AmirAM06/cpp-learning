/* In the name of God */
//Welcome to my castle. Population: 01
//kind of lonely here...

#include <bits/stdc++.h>
using namespace std;

int n, a, d;
string games;

int main(){
    cin >> n;
    cin >> games;
    for(int i = 0; i < n; i++){
        if(games[i] == 'A') a++;
        else if(games[i] == 'D') d++;
    }
    if(a > d) cout << "Anton";
    else if(d > a) cout << "Danik";
    else if(a == d) cout << "Friendship";
    return 0;
}