#include <bits/stdc++.h>
using namespace std;

char arr[1000];
int n;

int main(){

    bool itis;

    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        itis = arr[i] == i + 1;
    }

    itis && cout << "It is";
    !itis && cout << "It's not";

}