#include "Player.h"
#include <iostream>



Player::Player()
{
}


Player::~Player()
{
}

void Player::EquipPrimary(PrimaryWeapon w) {
	MainWeapon = w;
	std::cout << "Primary Weapon Equipped" << std::endl;
}

void Player::EquipSecondary(SecondaryWeapon w) {
	AlternateWeapon = w;
	std::cout << "Secondary Weapon Equipped" << std::endl;
}

void Player::ShootMain() {
	MainWeapon.Shoot();
}

void Player::ShootSecondary() {
	
	AlternateWeapon.Shoot();
}
