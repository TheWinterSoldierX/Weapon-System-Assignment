#pragma once
#include "PrimaryWeapon.h"
#include "SecondaryWeapon.h"

class Player
{
public:
	Player();
	virtual ~Player();

	PrimaryWeapon MainWeapon;
	SecondaryWeapon AlternateWeapon;

	void EquipPrimary(PrimaryWeapon w);

	void EquipSecondary(SecondaryWeapon w);

	void ShootMain();

	void ShootSecondary();
};

