/**
 * @file MeleeWeapons.h
 * @author ConcreteAbstracts 
 * @brief 
 * @version 0.1
 * @date 2022-10-24
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#ifndef MELEEWEAPONS_H
#define MELEEWEAPONS_H

#include <AttackWeapon.h>

class MeleeWeapons : public AttackWeapon {


public:
	/**
	 * @brief Get the Damage object
	 * 
	 * @return int 
	 */
	int getDamage();

	/**
	 * @brief Get the Name object
	 * 
	 * @return std::string 
	 */
	std::string getName();
};

#endif