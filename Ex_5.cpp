#include<iostream>
#include<vector>

using namespace std;

class Weapon {
	protected:
		string name;
		int damage;
	public:
		Weapon(string n, int d) : name(n), damage(d) {
			name=n;
			damage=d;
		}
		void displayBasicSpecs(){
			cout << "\nWeapon" << endl;
			cout << "-------" << endl;
			cout << "Name: " << name << endl;
			cout << "Damage: " << damage << endl;
		}
		virtual void attack() = 0;
};

class Gun : public Weapon {
	protected:
		int bullets;
	public:
		Gun(string n, int d, int b) : Weapon(n,d), bullets(b) {
			bullets=b;
		}

		void displaySpecs(){
			cout << "Bullets: " << bullets << endl;
		}

		void attack() override {
			cout << "Gun fires!" << endl;
		}
};

class Knife : public Weapon {
	public:
		Knife(string n, int d) : Weapon(n,d) {}
		void attack() override {
			cout << "Knife stabs!" << endl;
		}
};

void battlefield(Weapon* w){
	w -> attack();
}

int main() {
	Gun g1("War machine", 115, 500);
	Knife k1("Karambit", 155);

	vector<Weapon*> arsenal;
	arsenal.push_back(&g1);
	arsenal.push_back(&k1);

	for(Weapon* wp : arsenal) {
		wp -> displayBasicSpecs();
		battlefield(wp);
	}

	return 0;
}
