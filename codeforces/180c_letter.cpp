/* In the name of God */
//Welcome to my castle. Population: 01
//kind of lonely here...

#include <bits/stdc++.h>
using namespace std;

int lw, rw, minc, p;
string l;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> l;
    for(int i = 0; i < l.length(); i++){
        if(l[i] >= 'A' && l[i] <= 'Z'){
            rw++;
        }
    }
    minc = rw;
    //cout << '\n' << rw;
    
    for(int i = 0; i < l.length(); i++){
        bool cap = (l[i] >= 'A' && l[i] <= 'Z'), sml = (l[i] >= 'a' && l[i] <= 'z');
        if(cap) rw--;
        if(sml) lw++;
        //cout << '\n' << minc << ' ' << rw << ' ' << lw;
        minc = min(minc, (rw + lw));
    }
    cout /*<< '\n'*/ << minc;
    return 0;
}