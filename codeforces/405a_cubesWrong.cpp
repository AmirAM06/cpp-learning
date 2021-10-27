#include <bits/stdc++.h>
using namespace std;

int box[100][100], n;
int main(){
    cin >> n;
    for (int i = 0; i < n; i++){
        int m = 0;
        cin >> m;
        for (int j = 0; j < m; j++){
            box[i][j] = 1;
        }
    }

    

    for (int i = 0; i < n; i++){
        for(int j = 0; box[i][j] != 0; j++){
            cout << box[i][j];
        }
        cout << '\n';
    }
    return 0;
}