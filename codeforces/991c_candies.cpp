/* In the name of God */
//Welcome to my castle. Population: 01
//kind of lonely here...

#include <bits/stdc++.h>
using namespace std;

int n;

bool check(int k){
    int p = 0, v = 0;
    int temp = n;
    while(temp > 0){
        //cout << " v: " << v << " Temp: " << temp << '\n';
        if(temp < k){
            v += temp;
            temp = 0;
        }
        else{
            temp -= k;
            v += k;
        }
        if(temp >= 10){
            p += temp / 10;
            temp -= temp / 10;
        }
    }
    //cout << " v: " << v << " Temp: " << temp << '\n';
    return v >= n / 2;
}

int bs(int l, int r){
    int mid = 0;
    while((r - l) > 1){
        mid = (l + r) / 2; //((l + r) % 2 == 0)? (l + r / 2): (l + r) / 2 + 1;
        //cout << "mid: " << mid << " L: " << l << " r: " << r << '\n';
        if(check(mid)) r = mid;
        else l = mid;
    }
    return mid;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    cin >> n;
    cout << bs(1, ((n / 2) + 1));

    return 0;    
}