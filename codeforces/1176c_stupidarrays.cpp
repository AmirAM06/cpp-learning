/* In the name of allah */
//Welcome to my castle. Population: 01
//kind of lonely here...

#include <bits/stdc++.h>
using namespace std;

const int MAXN = 5 * 1e5 + 16;
int goodness;
int n, arr[MAXN], s[6][2];

int main(){
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    if(n < 6){
        cout << n;
        return 0;
    }

    for (int i = 0; i < n; i++){
        if(arr[i] == 4){
            s[0][0]++;
            s[0][1] += i;
        }else if(arr[i] == 8){
            s[1][0]++;
            s[1][1] += i;
        }else if(arr[i] == 15){
            s[2][0]++;
            s[2][1] += i;
        }else if(arr[i] == 16){
            s[3][0]++;
            s[3][1] += i;
        }else if(arr[i] == 23){
            s[4][0]++;
            s[4][1] += i;
        }else if(arr[i] == 42){
            s[5][0]++;
            s[5][1] += i;
        }
    }

    bool equalnumber = (
        s[0][0] == s[1][0] 
        && s[1][0] == s[2][0]
        && s[2][0] == s[3][0]
        && s[3][0] == s[4][0]
        && s[4][0] == s[5][0]
    ), equalplace = (
        s[0][1] < s[1][1]
        && s[1][1] < s[2][1]
        && s[2][1] < s[3][1]
        && s[3][1] < s[4][1]
        && s[4][1] < s[5][1]
    ), equal = (equalplace && equalnumber);
    //-----------------------------------------

    if(equal){
        cout << 0;
        return 0;
    }
    if(!equalnumber){
        int e = 0, ee[6] = {s[0][0], s[1][0], s[2][0], s[3][0], s[4][0], s[5][0]};
        sort(ee, ee + 6);
        for (int i = 0; i < 6; i++){
            e += (ee[i] - ee[0]);
        }
        cout << e;
        return 0;
    }
    if(!equalplace){
        int e = 0, ee[6] = {s[0][1], s[1][1], s[2][1], s[3][1], s[4][1], s[5][1]};
        for (int i = 0; i < 6; i++){
            cout << ee[i] << '\n';
        }
        return 0;
    }
}