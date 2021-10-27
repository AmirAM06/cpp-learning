/* In the name of god */
//Welcome to my castle. Population: 01
//kind of lonely here...

#include <bits/stdc++.h>
using namespace std;

int n;
int main(){
    cin >> n;
    int box[n];
    for (int i = 0; i < n; i++){
        cin >> box[i];
    }
    sort(box, box + n);
    for (int i = 0; i < n; i++){
        cout << box[i] << ' ';
    }
    return 0;
}