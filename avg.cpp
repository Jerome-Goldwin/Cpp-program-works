#include<iostream>
int main() {
	using namespace std;
	int m1,m2,m3,avg;
	char str[20];
	cout << "Enter your name: ";
	cin >> str;
	cout << "Enter the marks: ";
	cin >> m1 >> m2 >> m3;
	avg = ( m1 + m2 + m3 ) / 3;
	cout << "Your name is " << str << endl;
	cout << "Your avg is " << avg;
	return 0;
}
