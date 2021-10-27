#include <bits/stdc++.h>
using namespace std;
const int MAXN = 100 + 16;
int n, out[MAXN];
string in[MAXN];
int main(){
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> in[i];
        out[i] = in[i].length();
    }
    for (int i = 0; i < n; i++){
        if(out[i] > 10){
            cout << in[i][0] << out[i] - 2 << in[i][out[i] - 1] << '\n';
        }
        else{
            cout << in[i] << '\n';
        }

    }
    return 0;
}