#include <bits/stdc++.h>
using namespace std;

int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
int tempR[5], tempL[5];


int main(){
    copy(arr + 0, arr + 5 + 1, tempR);
    copy(arr + 5, arr + 10, tempL);
    for (int i = 0; i < 5; i++) cout << tempR[i] << ' ';
    cout << '\n';
    for (int i = 0; i < 5; i++) cout << tempL[i] << ' ';

}