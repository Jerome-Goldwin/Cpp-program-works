#include<iostream>

using namespace std;

class Weapon{
	public:
		string name;
		int damage;
		float weight;

		void showSpecs(){
			cout << "\nWeapon" << endl;
			cout << "-------"<< endl;
			cout << "Name: " << name << endl;
			cout << "Damage: " << damage << endl;
			cout << "Weight: " << weight << " kg"<< endl;
		};
};

int main(){
	Weapon w1,w2;
	w1.name="War Machine";
	w1.damage=115;
	w1.weight=5.5;
	w1.showSpecs();
	w2.name="Blaster";
	w2.damage=85;
	w2.weight=3.2;
	w2.showSpecs();
	return 0;
}
