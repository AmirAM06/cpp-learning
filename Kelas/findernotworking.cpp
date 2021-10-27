#include <bits/stdc++.h>
using namespace std;

int arr[1000*1000];
int finder(int plc){
    cout << "plc = "  << plc/2 << '\n';
    int dovom;
    if(plc % 2 == 0){
        dovom = plc/2;
    }else{
        dovom = plc/2 + 1;
    }
    int n;
    cin >> n;
    arr[plc] = n;
    if(!(arr[plc] == 1 && arr[plc + 1] == 0 && arr[plc - 1] == 1)){
        if(arr[plc] == 1){
            plc = finder(dovom - dovom/2);
            
        }else{
            plc = finder(dovom + dovom/2);
        }
    }
    return plc;
}

int main(){
    int n;
    cin >> n;
    cout << finder(n);
    
}