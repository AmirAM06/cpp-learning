/* In the name of God */
//Welcome to my castle. Population: 01
//kind of lonely here...

#include <bits/stdc++.h>
using namespace std;

int n, a, b, g[100 + 16];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    cin >> n >> a >> b;
    for(int i = 0; i < n; i++){
        cin >> g[i];
    }

    //first goal of second half;
    int time = 0;
    for(int i = 0; i < n; i++){
        if(g[i] > 45 + a || (g[i] < g[i - 1] && g[i] >= 45)){
            time = i;
            i = n;
        }
    }
    //cout << time << '\n';

    //is the writing correct?
    bool status = true;
    for(int i = 0; i < time - 1 && status; i++){
        //cout << g[i] << ' ';
        if(g[i + 1] < g[i]) status = false;
    }
    for(int i = time; i < n - 1 && status; i++){
        //cout << g[i] << ' ';
        if(g[i + 1] < g[i] || g[i + 1] > 90 + b) status = false;
    }
    cout << (status? "YES" : "NO");
    return 0;
}