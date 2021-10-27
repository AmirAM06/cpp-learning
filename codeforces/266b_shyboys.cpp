/* In the name of allah */
//Welcome to my castle. Population: 01
//kind of lonely here...

#include <bits/stdc++.h>
using namespace std;
const int MAXN = 50 + 16;

int n, k;
string q;

int main(){
    cin >> n >> k;
    cin >> q;
    for (int i = 0; i < k; i++){
        for(int j = 0; j < n - 1;){
            if(q[j] == 'B' && q[j+1] == 'G'){
                swap(q[j], q[j + 1]);
                j += 2;
            }else j++;
        }
    }
    cout << q;
}