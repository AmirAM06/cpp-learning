/* In the name of God */
//Welcome to my castle. Population: 01
//kind of lonely here...

#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e5 + 16;

int n, k, bell[MAXN], p, box[MAXN];

int main(){
    cin >> n >> k;
    int x = n;
    for(int i = 0; i < n - k; i++){
        cin >> bell[i];
    }
    for(int i = 0; i < n - k; i+=2){
        
    }
    cout << '\n';
    sort(bell, bell + n);
    cout << bell[n - 1];
}