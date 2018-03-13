#pragma once
#include "Weapon.h"

class PrimaryWeapon : public Weapon
{
public:
	PrimaryWeapon();
	virtual ~PrimaryWeapon();

	PrimaryWeapon::PrimaryWeapon(std::string str);
};

