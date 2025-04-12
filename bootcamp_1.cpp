#include<iostream>

using namespace std;

float add(int a, float b){
	return a+b;
}

int main(){

	string codename;
	int a;
	float b;

	cout << "Enter your codename: ";
	cin >> codename;
	cout << endl << "Welcome, " << codename << endl;
	cout << "\nEnter an integer: "; cin >> a; cout << endl;
	cout << "Enter a float: "; cin >> b; cout << endl;
	cout << "\nThe number you entered are " << a << " and " << b << endl;
	cout << "\nAnd the sum of those numbers are " << add(a,b) << endl;
	return 0;
}
