/* In the name of God */
//Welcome to my castle. Population: 01
//kind of lonely here...

#include <bits/stdc++.h>
using namespace std;

vector <long long> arr;

long long solve(long long n){
    arr.clear();
    arr.resize(n);
    long long out = 0;

    for(long long i = 0; i < n; i++){
        cin >> arr[i];
    }

    vector <long long> temp;
    temp.push_back(arr[0]);
    for(long long r = 1; r < n; r++){
        bool status = (arr[r - 1] > 0 ^ arr[r] > 0);
        if(status){
            long long maxs = temp[0];

            for(long long i = 0; i < temp.size(); i++){
                //cout << "temp i: " << temp[i] << '\n';
                maxs = max(maxs, temp[i]);
            }
            out += maxs;

            temp.clear();
        }
        
        temp.push_back(arr[r]);
    }
    long long maxs = temp[0];

    for(long long i = 0; i < temp.size(); i++){
            //cout << "temp i: " << temp[i] << '\n';
            maxs = max(maxs, temp[i]);
    }
    out += maxs;
    temp.clear();

    return out;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    long long t;
    cin >> t;
    for(long long i = 0; i < t; i++){
        long long a;
        cin >> a;
        cout << solve(a) << '\n';
    }
    return 0;    
}