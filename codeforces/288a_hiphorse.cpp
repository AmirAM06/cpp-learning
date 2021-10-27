/* In the name of God */
//Welcome to my castle. Population: 01
//kind of lonely here...

#include <bits/stdc++.h>
using namespace std;

int shoes[4], pairs;

int main(){
    for (int i = 0; i < 4; i++){
        cin >> shoes[i];
    }
    sort(shoes, shoes+4);
    for (int i = 0; i < 3; i++){
        pairs += (shoes[i] == shoes[i + 1])? 1 : 0;
    }
    cout << pairs;
    
}