#include <bits/stdc++.h>
using namespace std;

char arr[1000*1000];
int finder( int start, int len){
    int a, b;
    len = (len % 2 == start % 2)? (len + start) / 2: (len + start) / 2 + 1;
    cout << len << "ro bede" << '\n';
    cin >> arr[len];
    cout << "baadish ham bede" << '\n';
    cin >> arr[len + 1];
    bool islast = ((arr[len] == '1' && arr[len + 1] == '0') || (arr[len] == '0' && arr[len - 1] == '1'));
    if(!islast){
        if(arr[len] == '1' && arr[len + 1] == '1'){
            len = finder(len, 2*len);
        }
        if(arr[len] == '0' && arr[len + 1] == '0'){
            len = finder(len, len / 2);
        }
        if(arr[len] == '0' && arr[len + 1] == '1'){
            return -1;
        }
    }
    return len;
}

int main(){
    int n;
    cin >> n;
    cout << finder(0, n);
    
}