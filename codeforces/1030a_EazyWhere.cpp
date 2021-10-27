/* In the name of God */
//Welcome to my castle. Population: 01
//kind of lonely here...

#include <bits/stdc++.h>
using namespace std;

int n;
bool ez = true;

int main(){
    cin >> n;
    for (int i = 0; i < n; i++){
        bool a;
        cin >> a;
        if(a){
            ez = false;
        }
    }
    if(ez) cout << "Eazy";
    else cout << "Hard";
}