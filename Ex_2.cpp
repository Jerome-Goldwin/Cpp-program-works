#include<iostream>

using namespace std;

class Weapon{
	private:
		string name;
		int damage;
		float weight;

	public:
		Weapon(string n, int d, float w){
			name=n;
			damage=d;
			weight=w;
		}
		void showSpecs(){
			cout << "\nWeapon" << endl;
			cout << "-------" << endl;
			cout << "Name: " << name << endl;
			cout << "Damage: " << damage << endl;
			cout << "Weight: " << weight << " kg"<< endl;
		};
};

int main(){
	Weapon w1("War Machine",115,5.5);
	w1.showSpecs();
	Weapon w2("Blaster",85,3.2);
	w2.showSpecs();
	return 0;
}
