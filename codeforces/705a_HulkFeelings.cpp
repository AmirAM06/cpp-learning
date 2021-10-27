/* In the name of God */
//Welcome to my castle. Population: 01
//kind of lonely here...

#include <bits/stdc++.h>
using namespace std;

int n;
int main(){
    cin >> n;
    for (int i = 0; i < n; i++){
        if(i > 0) cout << "that ";
        if(i % 2) cout << "I love ";
        else cout << "I hate ";
    }
    cout << "it";
}