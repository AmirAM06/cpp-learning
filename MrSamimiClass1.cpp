#include <iostream>
using namespace std;

int main() {
	double ghad, vazn, bmi;
	cout << "ghad khod ra vared konid (m)";
	cout << endl;
	cin >> ghad;
	cout << "vazn khod ra vared konid (kg)";
	cout << endl;
	cin >> vazn;
	bmi = vazn / (ghad * ghad);
	
	cout << "bmi shoma =" << " " << bmi << endl;
	
	if (bmi <= 18){
		cout << "tebgh gozareshat shoma shoub sim hastid";
	}
	if (bmi > 18 and bmi <= 25){
		cout << "tebgh gozareshat shoma normal hastid";
	}
	if (bmi > 25){
		cout << "tebgh gozareshat shoma gambu hastid";
	}
	return 0;
}
