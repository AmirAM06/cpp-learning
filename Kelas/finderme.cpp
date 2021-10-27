#include <bits/stdc++.h>
using namespace std;
const int nn = 1e6 + 16;
int a[nn];

int finder(int start, int end){
    if(start == end - 1)
        return start;
    int mid = (start + end) / 2;
    if (a[mid] == 1){
        return finder(mid, end);
    }else{
        return finder(start, mid);
    }
}
int main(){
    int n;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    cout << (0, n);
    return 0;
}