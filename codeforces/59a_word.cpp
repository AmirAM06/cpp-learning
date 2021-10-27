/* In the name of allah */
//Welcome to my castle. Population: 01
//kind of lonely here...

#include <bits/stdc++.h>
using namespace std;

string in, out;
int up, low;

int main(){
    cin >> in;
    for(int i = 0; i < in.length(); i++){
        if(in[i] >= 'A' && in[i] <= 'Z') up++;
        if(in[i] <= 'z' && in[i] >= 'a') low++;
    }
    if(up > low){
        for (int i = 0; i < in.length(); i++){
            in[i] = (in[i] <= 'z' && in[i] >= 'a')? in[i] - ('a' - 'A'): in[i];
        }
    }
    else{
        for (int i = 0; i < in.length(); i++){
            in[i] = (in[i] >= 'A' && in[i] <= 'Z')? in[i] + ('a' - 'A'): in[i];
        }
    }
    cout << in;
}