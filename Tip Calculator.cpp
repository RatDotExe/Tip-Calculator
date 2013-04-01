//
// Rat_Dot_Exe's Tip Calculator
// Written in C++
//


#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;
int main() {
	
	string another = "y";
	double t;
	double p;
	double r;
	double d;
	int hund = 100;
	
	while (another == "y") {
	
	cout << "What's the total price?\n";
	cin >> t;
	
	cout << "What's the %?\n";
	cin >> p;
	
	d = p / hund;
	
	r = t * d;
	
	cout << "Result: $" << r << "\n";
	
	cout << "Type y to calculate another tip. Type n to end.\n";
	cin >> another;
	}
	
    return 0;
	
}