#pragma once
#include "Weapon.h"

class SecondaryWeapon : public Weapon
{
public:
	SecondaryWeapon();
	virtual ~SecondaryWeapon();

	SecondaryWeapon::SecondaryWeapon(std::string str);
};

