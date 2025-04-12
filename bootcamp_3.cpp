#include<iostream>

using namespace std;

class Soldier{
	private:
		string name;
		int age;
		float stamina;

	public:
		Soldier(string n, int a, float s){
			name=n;
			age=a;
			stamina=s;
		}
		void displayInfo(){
			cout << "\nSoldier Report" << endl;
			cout << "---------------" << endl;
			cout << "Name: " << name << endl;
			cout << "Age: " << age << endl;
			cout << "Stamina: " << stamina << endl;
		}
		void runDrill(float hours){
			float reduction=hours*5.5;
			stamina -= reduction;
			cout << name << " runs a drill for " << hours << " hours." << endl;
			cout << "Stamina now: " << stamina << endl;
		}
};

int main(){
	Soldier s1("Ghost", 32, 87.5);
	Soldier s2("Soap", 29, 92.1);
	s1.displayInfo();
	s1.runDrill(3.0);
	s2.displayInfo();
	s2.runDrill(1.5);
	return 0;
}
