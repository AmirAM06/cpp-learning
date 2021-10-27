/* In the name of God */
//Welcome to my castle. Population: 01
//kind of lonely here...

#include <bits/stdc++.h>
using namespace std;

long long a, b, k, x, y, l;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    cin >> k >> a >> b;

    if(a >= 0) x = ((a % k) > (k / 2))? (k - (a % k)): -(a % k);
    else{
        x = a + (a * -2);
        x = ((x % k) > (k / 2))? (k - (x % k)): -(x % k);
    }

    if(b >= 0) y = ((b % k) > (k / 2))? (k - (b % k)): -(b % k);
    else{
        y = b + (b * -2);
        y = ((y % k) > (k / 2))? (k - (y % k)): -(y % k);
    }

    if((x == k / 2 + 1) && (k % 2 == 1)) x = (a > b)? -x : x;
    if((y == k / 2 + 1) && (k % 2 == 1)) y = (a > b)? y : -y;

    //cout << x << ' ' << y << '\n';;

    if(abs(a - b) < k) l = abs(a - b);
    else{
        l = abs((a + x) - (b + y)) / k;
        //cout << l << '\n';
        l += abs(x);
        l += abs(y);
    }
    cout << l /*<< '\n'*/;
    



    
    
}