#include<iostream>

using namespace std;

class Weapon {
	protected:
		string name;
		int damage;
	public:
		Weapon (string n, int d) : name(n), damage(d) {};
		void showSpecs() {
			cout << "\nWeapon" << endl;
			cout << "-------" << endl;
			cout << "Name: " << name << endl;
			cout << "Damage: " << damage << endl;
		};
};

class Gun : public Weapon {
	private:
		int bullets;
	public:
		Gun( string n, int d, int b ) : Weapon(n,d), bullets(b) {};
		void showBasicSpecs() {
			showSpecs();
			cout << "Bullets: " << bullets << endl;
		};
};

int main() {
	Gun g1("War machine", 115, 500);
	g1.showBasicSpecs();
	return 0;
};
