/* In the name of God */
//Welcome to my castle. Population: 01
//kind of lonely here...

#include <bits/stdc++.h>
using namespace std;
const int maxn = 1e5 + 16;

int out[maxn], t;

long long game(long long k,long long n,long long a,long long b){
		k -= n * a;
		if (k > 0) {
			return n;
		} else {
			k = -k;
			++k;
			long long diff = a - b;
			long long turns = (k + diff - 1) / diff;
			if (turns > n) {
                return -1;
			} else {
				return (n - turns);
			}
        }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    cin >> t;

    for(int i = 0; i < t; i++){
        int k, n, a, b;
        cin >> k >> n >> a >> b;
        out[i] = game(k, n, a, b);
    }

    for(int i = 0; i < t; i++){
        cout << out[i] << '\n';
    }

    return 0;
}