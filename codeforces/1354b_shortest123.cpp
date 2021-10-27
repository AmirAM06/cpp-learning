/* In the name of God */
//Welcome to my castle. Population: 01
//kind of lonely here...

#include <bits/stdc++.h>
using namespace std;

int test, out[20000];

int ternary(string s){
    int k = -1;
    char m = 0;
    int r = 0, l = -1;

    for(int i = 1; i < s.length(); i++){

        l = i;
        
        //first again
        if(s[i] == s[r]){
            //triple broken or double first?
            r =(s[i - 1] == s[r])? i : i - 1;
            //out << "r: " << r << '\n';
            m = 0;
        }

        //till the end of the triple:
        if(s[i] != s[r] && m == 0){
            m = s[i];
        }

        //found a triple
        if(m != 0 && s[i] != m && s[i] != s[r]){

            //cout << r << ' ' << l << ' ' << m << ' ' << '\n';

            l = i + 1;
            k = (l - r + 1 < k && k != -1)? l - r: k;
            if(k == -1) k = l - r;
            r = i - 1;
            m = 0;
        }
    }

    k = (k == -1)? 0 : k;
    return k;

}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> test;

    for(int t = 0; t < test; t++){
        string temp;
        cin >> temp;
        out[t] = ternary(temp);
    }
    for(int i = 0; i < test; i++){
        cout << out[i] << '\n';
    }
}