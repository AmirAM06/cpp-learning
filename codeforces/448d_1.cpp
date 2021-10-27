#include <bits/stdc++.h>
using namespace std;

int n, m, k;
vector<int> table;
int main(){
    cin >> n >> m >> k;
    //cout << 0 << '\n';
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= m; j++){
            table.push_back((j * i));
        }
    }
    //cout << 1 << '\n';
    
    sort(table.begin(), table.end());

    for (int i = 0; i < table.size(); i++){
        cout << table[i] << ' ';
    }
    //cout << 2 << '\n';

    cout << table[k - 1];
}