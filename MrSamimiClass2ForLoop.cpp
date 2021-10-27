#include <iostream>
using namespace std;

int m,n;

int main(){
	cin >> m;
	n = m;
	for (int i = 0; i < m; i++){
		for (int k = 0; k < n; k++){
			cout << "0";
		}
		n = n-1;
		for (int j = 0; j < i; j++){
			cout << "1";
		}
		cout << endl;
	}
	return 0;
}
