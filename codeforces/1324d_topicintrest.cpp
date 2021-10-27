/* In the name of allah */
//Welcome to my castle. Population: 01
//kind of lonely here...

#include <bits/stdc++.h>
using namespace std;

const int MAXN = 2 * 1e5;

long long n, out;
vector<long long> a, b;

int main(){
	cin >> n;
	for (int i = 0; i < n; i++){
		int temp = 0;
		cin >> temp;
		a.push_back(temp);
	}

	for (int i = 0; i < n; i++){
		int temp = 0;
		cin >> temp;
		b.push_back(temp);
	}

	for (int i = 0; i < n; i++){
		for (int j = i + 1; j < n; j++){
			if((a[i] + a[j]) > (b[i] + b[j])) out++;
		}
	}
	cout << out;

	return 0;
}
