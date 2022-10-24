/**
 * @file Spacecraft.h
 * @author ConcreteAbstracts 
 * @brief 
 * @version 0.1
 * @date 2022-10-24
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#ifndef SPACECRAFT_H
#define SPACECRAFT_H

#include <VesselWeapon.h>

class Spacecraft : public VesselWeapon {


public:
	/**
	 * @brief Get the Damage object
	 * 
	 * @return int 
	 */
	int getDamage();

	/**
	 * @brief Get the Defense object
	 * 
	 * @return int 
	 */
	int getDefense();

	/**
	 * @brief Get the Name object
	 * 
	 * @return std::string 
	 */
	std::string getName();
};

#endif