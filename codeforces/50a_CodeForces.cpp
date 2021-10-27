#include <iostream>
using namespace std;

int main(){
	int m,n,a;
	cin >> m;
	cin >> n;
	if (m % 2 != 0){
		m = m - 1;
	}
	cout << (m/2)*n;
	return 0;
}
