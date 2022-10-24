/**
 * @file VesselWeaponCreator.h
 * @author ConcreteAbstracts 
 * @brief 
 * @version 0.1
 * @date 2022-10-24
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#ifndef VESSELWEAPONCREATOR_H
#define VESSELWEAPONCREATOR_H

#include <VesselWeapon.h>

class VesselWeaponCreator {

private:
	int total;

public:
	/**
	 * @brief Construct a new Vessel Weapon Creator object
	 * 
	 */
	VesselWeaponCreator();

	/**
	 * @brief 
	 * 
	 * @return VesselWeapon* 
	 */
	VesselWeapon* produce();

protected:
	/**
	 * @brief 
	 * 
	 * @return VesselWeapon* 
	 */
	virtual VesselWeapon* produceVesselWeapon() = 0;

public:
	/**
	 * @brief Get the Total object
	 * 
	 * @return int 
	 */
	int getTotal();
};

#endif