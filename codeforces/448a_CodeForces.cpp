#include <iostream>
using namespace std;

// amount of cups, g for gold, s for silver, and b for bronze
int gc, sc, bc;

// amount of medals
int gm, sm, bm;

// sum of all
int m, c;

// how many shelves?
int s;

int main(){
    cin >> gc >> sc >> bc;
    cin >> gm >> sm >> bm;
    cin >> s;

    m = gm + sm + bm;
	c = gc + sc + bc;

	// how many shelves you need to place your cups
	int rc;
	if (c % 5 == 0){
		rc = c / 5;
	}
	else{
		rc = (c / 5) + 1;
	}

	// DEBUGGING cout << "shelves for Cups: " << rc << "\n";

	// how many shelves you need to place your medals
	int rm;
	if (m % 10 == 0){
		rm = m / 10;
	}
	else{
		rm = (m / 10) + 1;
	}

	// DEBUGGIGN cout << "shelves for Medals: " << rm << "\n";

	// Does it fit?
    if (rm + rc <= s){
		cout << ("YES");
    }

    else{
		cout << ("NO");
    }

	return 0;

}