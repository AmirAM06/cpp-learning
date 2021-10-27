/*In the name of allah*/
//Aug 29 19:15

#include <bits/stdc++.h>
using namespace std;

//adding an e for difference:))
int n, pluse = 0, minuse = 0;
string in;
int main(){
    cin >> n;
    while(n){
        n--;
        cin >> in;
        if (in == "X++" || in == "++X"){
            pluse++;
        }else if(in == "X--" || in == "--X"){
            minuse++;
        }
    }
    cout << pluse - minuse;
    return 0;
}