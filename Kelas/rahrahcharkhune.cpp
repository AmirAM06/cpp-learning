#include <bits/stdc++.h>
using namespace std;


int m, n;
int main(){
    cin >> n >> m;
    int arr[n][m];
    char arrr[n][m];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> arr[i][j];
        }
    }
    cout << "\njam satr ha\n";
    for (int i = 0; i < n; i++){
        int out = 0;
        for (int j = 0; j < m; j++){
            out += arr[i][j];
        }
        cout << out << ' ';
    }
    cout << "\njam sotun ha\n";
    for (int i = 0; i < n; i++){
        int out = 0;
        for (int j = 0; j < m; j++){
            out += arr[j][i];
        }
        cout << out << ' ';
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            bool stat = ((i % 2) == (j % 2));
            arrr[i][j] = stat? '+' : '-';
        }
    }
    cout << "\nrah rah char khune\n";
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cout << arrr[i][j] << ' ';
        }
        cout << '\n';
    }
}