/* In the name of allah */
//Welcome to my castle. Population: 01
//kind of lonely here...

#include <bits/stdc++.h>
using namespace std;

/*const int MAXN = 50 + 16;
int n, k, p[MAXN], ep[MAXN];
int main(){
    cin >> k >> n;
    for (int i = 0; i < n; i++){
        cin >> p[i];
    }

    sort(p, p + n);

    for (int i = 0; i <= n - k; i++){
        ep[i] = p[i + k] - p[i];
    }

}*/

int main() {
	int n, m;
	cin >> n >> m;
	int mini = 10000;
	int arr[m];
	for(int i = 0; i < m; i++){
		cin >> arr[i];
	}
sort(arr, arr + m);
	for(int i = n; i <= m; i++){
		mini = min(mini, abs(arr[i-1]-arr[i-n]));
	}
	cout<<mini;





 	return 0;
}