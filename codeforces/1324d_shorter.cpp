#include <bits/stdc++.h>

using namespace std;

int main() {
	int n = 0;
	cin >> n;

	vector<int> a(n), b(n), c(n);
    
	for (int i = 0; i < n; i++){
        int temp;
        cin >> temp;
        a[i] = temp;
    }    
	for (int i = 0; i < n; i++){
        int temp;
        cin >> temp;
        b[i] = temp;
    }

	for (int i = 0; i < n; ++i) {
		c[i] = a[i] - b[i];
	}

	sort(c.begin(), c.end());
	
	long long x = 0;
	for (int i = 0; i < n; i++) {
		if (c[i] <= 0) continue;
		int pos = lower_bound(c.begin(), c.end(), -c[i] + 1) - c.begin();
		x += i - pos;
	}
	
	cout << x;
	
	return 0;
}