/* In the name of allah */
//Welcome to my castle. Population: 01
//kind of lonely here...

#include <bits/stdc++.h>
using namespace std;

const int maxn = (2*1e5 + 16);
int a[maxn], b[maxn], na, nb;

int finder(int start, int end, int searchfor){
    int l = start, r = end;
    while (r > l + 1) {
        int m = (l + r) / 2;
        if (a[m] <= searchfor) l = m;
        else r = m;
    }
    return l + 1;
}

int main(){
    cin >> na >> nb;
    for (int i = 0; i < na; i++){
        cin >> a[i];
    }
    for (int i = 0; i < nb; i++){
        cin >> b[i];
    }
    sort(a, a + na);
    for (int i = 0; i < nb; i++){
        cout << finder(-1, na, b[i]) << ' ';
    }
}