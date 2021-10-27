/* In the name of allah */
//Welcome to my castle. Population: 01
//kind of lonely here...

#include <bits/stdc++.h>
using namespace std;

string ber, bir;
bool status;
vector <char> temp;

int main(){
    cin >> ber >> bir;
    for (int i = 0; i < bir.length(); i++){
        temp.push_back(bir[i]);
    }
    reverse(temp.begin(), temp.end());

    for (int i = 0; i < ber.length(); i++){
        if(temp[i] == ber[i]) status = true;
        else{
            status = false;
            break;
        }
        //cout << temp[i] << ' ' << ber[i] << '\n';
    }

    if (status){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
    return 0;
}