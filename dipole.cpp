//PROGRAM NAME:	Dipole calculator
//AUTHOR:	Ru1722
//DESCRIPTION:	Simple dipole calculator written in c++
//VERSION:	1.0
//DEV NOTES:	N/A

#include <iostream>

using namespace std;

int main(){
	float freq;

	cout << "Enter the resonant frequency: ";
	cin >> freq;
	
	cout << endl;
	cout << "Total length of dipole: " << 468 / freq * 12 << " inches \n";
	cout << "Length of one element:  " << 234 / freq * 12 << " inches \n";

	return 0;
}
