#include <bits/stdc++.h>
using namespace std;

const long MAXNK = 5*1e5;
int n, m, k, table[MAXNK];

int main(){
    cin >> n >> m >> k;
    int l = 0;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= m; j++){
            table[l] = i * j;
            l++;
        }
    }
    sort(table, table + l);
    cout << table[k - 1];
}