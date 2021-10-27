#include <bits/stdc++.h>
using namespace std;

int a[3], stpa, stpb, trtib[3];

int main(){
    cin >> a[0] >> a[1] >> a[2];

    for(int i = 0; i < 3; i++){		
	    for(int j = i + 1; j < 3; j++){
	    	if(a[i]>a[j]){
		    	int plc = a[i];
		    	a[i]=a[j];
		    	a[j]=plc;
		    }
		}
	}
    
    stpa = abs(a[0] - a[1]);
    stpb = abs(a[1] - a[2]);

    /*for (int i = 0 ; i < 3; i++){
        cout << a[i] << ", ";
    }
    cout << '\n';
    cout << stpa;
    stpb = abs(a[1] - a[2]);
    cout << stpb;*/
    
    cout << stpa + stpb;
}