/* In the name of God */
//Welcome to my castle. Population: 01
//kind of lonely here...

#include <bits/stdc++.h>
using namespace std;

int n, y, x, l[100 + 100];
bool playable = false;
int main(){
    cin >> n;
    cin >> x;
    for (int i = 0; i < x; i++){
        cin >> l[i];
    }
    cin >> y;
    for(int i = 0; i < y; i++){
        cin >> l[x + i];
    }
    int temp = x + y;
    sort(l, l+temp);
    playable =  (l[0] == 1 && l[temp - 1] >= n)? true: false;
    for(int i = 0; (i < temp - 1) && playable; i++){
        if(l[i + 1] - l[i] <= 1){
            playable = true;
        }
        else{
            playable = false;
        }
    }
    playable && cout << "I become the guy.";
    !playable && cout << "Oh, my keyboard!";
    return 0;
}