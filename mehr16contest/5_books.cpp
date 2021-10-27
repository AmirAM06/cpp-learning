/* In the name of God */
//Welcome to my castle. Population: 01
//kind of lonely here...

#include <bits/stdc++.h>
using namespace std;
string s[3] = {"the", "of", "and"};

bool known(string a, string b){
    //true = book, false = name;
    bool sa = false, sb = false;
    int na = 0, nb = 0;
    int l = 0;
    for(int i = 0; i < a.length(); i++){
        if(a[i] >= 'A' && a[i] <= 'Z') a[i] -= 'A' - 'a';
    }

    for(int i = 0; i < b.length(); i++){
        if(b[i] >= 'A' && b[i] <= 'Z') b[i] -= 'A' - 'a';
    }

    for(int r = 0; r < a.length() && !(sa); r++){

        if(na >= 3) sa = true;

        if(a[r] == '-' || r == a.length() - 1){
            if(r == a.length() - 1) r++;
            string word = "";
            for(int i = 0; i < (r - l); i++){
                word += a[i + l];
            }

            //cout << word << '\n';

            if(word == s[0] || word == s[1] || word == s[2]) sa = true;

            na++;
            l = r + 1;
            r++;
        }
    }
    l = 0;
    for(int r = 0; r < b.length() && !(sb); r++){

        if(nb >= 3) sb = true;

        if(b[r] == '-' || r == b.length() - 1){
            if(r == b.length() - 1) r++;
            string word = "";
            for(int i = 0; i < (r - l); i++){
                word += b[i + l];
            }

            //cout << word << '\n';

            if(word == s[0] || word == s[1] || word == s[2]) sb = true;
            nb++;
            l = r + 1;
            r++;
        }
    }
    return sa == sb;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, out = 0;

    cin >> n;

    for(int i = 0; i < n; i++){
        string a, b;
        cin >> a >> b;
        out += known(a, b);
    }
    cout << out;
    
}