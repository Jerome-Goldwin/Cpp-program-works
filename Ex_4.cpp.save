#include<iostream>

using namespace std;

class Weapon{
	public:
		virtual void attack() {
			cout << "Weapon attacks!" << endl;
		}
};

class Gun : public Weapon {
	public:
		void attack() override {
		cout << "Gun fires bullets!" << endl;
		}
};

void battlefield(Weapon* w){
	w->attack();
}

int main(){
	Weapon w1;
	Gun g1;
	w1.attack();
	g1.attack();
	battlefield(&g1);
	return 0;
}
