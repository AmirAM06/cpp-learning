#include <iostream>
using namespace std;

int main() {
	long long n,m,a;
	cin >> n;
	cin >> m;
	cin >> a;
	long long na,ma;
	na = n / a;
	ma = m / a;

	if (n % a != 0){
		na = na + 1;
	}

	if (m % a != 0){
		ma = m / a + 1;
	}
	
	cout << na*ma;
	
	return 0;
}
