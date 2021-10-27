#include <bits/stdc++.h>
using namespace std;

bool matrix[5][5];
pair <int, int> loc;

int main(){
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            cin >> matrix[i][j];
            loc.first = (matrix[i][j] == 1)? i : loc.first;
            loc.second = (matrix[i][j] == 1)? j : loc.second;
        }
    }
    //cout << loc.first << ',' << loc.second << '\n';
    loc.first = (loc.first <= 2)? 2 - loc.first : loc.first - 2;
    loc.second = (loc.second <= 2)? 2 - loc.second : loc.second - 2;
        
    cout << (loc.first) + (loc.second);

    return 0;
}