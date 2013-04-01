//
// Rat_Dot_Exe's Tip Calculator
// Written in C++
//


#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;
int main() {
	
	double t;
	double p;
	double r;
	double d;
	int hund = 100;
	
	cout << "What's the total price?\n";
	cin >> t;
	
	cout << "What's the %?\n";
	cin >> p;
	
	d = p / hund;
	
	r = t * d;
	
	cout << "Result: " << r;
	
	return 0;
	
}