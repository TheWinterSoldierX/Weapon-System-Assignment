#include <iostream>
#include "Player.h"
#include "PrimaryWeapon.h"
#include "SecondaryWeapon.h"

int main() {

	Player p;

	PrimaryWeapon w1("dugdugdugdug");
	SecondaryWeapon w2("KASHIII"), w3("trrt trrt trrt");

	p.EquipPrimary(w1);
	p.ShootMain();

	p.EquipSecondary(w2);
	p.ShootSecondary();

	p.EquipSecondary(w3);
	p.ShootSecondary();

	getchar();
	return 0;
}