/* In the name of God */
//Welcome to my castle. Population: 01
//kind of lonely here...

#include <bits/stdc++.h>
using namespace std;

long long test, c, out[150000];
vector <pair <long long, long long>> m;


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    cin >> test;
    for(int t = 0; t < test; t++){
        c = 0;
        cin >> c;
        m.clear();
        long long suma = 0, sumb = 0;
        for(long long i = 0; i < c; i++){
            long long a, b;
            cin >> a >> b;
            m.push_back({b, a});
        }
        for (long long i = 0; i < c; i++){
            if(i < c - 1){
                m[i].first = min(m[i].first, m[i+1].second);
            }
            else{
                m[i].first = min(m[i].first, m[0].second);
            }
            sumb += m[i].first;
            suma += m[i].second;
        }
        sort(m.begin(), m.end());
        out[t] = suma - (sumb - m[0].first);
    }
    for (long long i = 0; i < test; i++){
        cout << out[i] << ' ';
    }
}