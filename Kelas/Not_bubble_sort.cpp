#include <bits/stdc++.h>
using namespace std;

int arr[1000];

void sort(int n){
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++){
        for (int j = i+1; j < n; j++){
            if(arr[i] > arr[j]){
                swap(arr[i], arr[j]);
            }
        }
    }
    cout << "out:\n";
    for (int i = 0; i < n; i++){
        cout << arr[i] << ", ";
    }
}

int n;

int main(){

    cin >> n;
    sort(n);

    return 0;
}