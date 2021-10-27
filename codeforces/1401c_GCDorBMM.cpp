/* In the name of God */
//Welcome to my castle. Population: 01
//kind of lonely here...

#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e5 + 16;

long long test, n;
vector <long long> arr, tmp;
bool status;
string out[MAXN];

int main(){
    cin >> test;
    for(long long t = 0; t < test; t++){

        status = true;
        n = 0;
        cin >> n;
        tmp.clear();
        arr.clear();

        for (long long i = 0; i < n; i++){
            long long temp = 0;
            cin >> temp;
            arr.push_back(temp);
            tmp.push_back(temp);
        }

        sort(tmp.begin(), tmp.end());
        
        for(int i = 0; i < n; i++){
            cout << tmp[i] << ' ' << arr[i] << '\n';
        }

        for(long long i = 0; i < arr.size(); i++){
            if((tmp[i] != arr[i]) && (arr[i] % tmp[0] != 0)){
                status = false;
                break;
            }
        }
        cout << "Stat: " << status << '\n';
        out[t] = status? "YES" : "NO";
    }

    for (long long i = 0; i < test; i++) cout << out[i] << '\n';
    return 0;
}