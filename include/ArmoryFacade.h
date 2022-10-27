/**
 * @file ArmoryFacade.h
 * @author ConcreteAbstracts 
 * @brief 
 * @version 0.1
 * @date 2022-10-24
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#ifndef CONCRETEABSTRACTS_ARMORYFACADE_H
#define CONCRETEABSTRACTS_ARMORYFACADE_H

#include <TransportContext.h>
#include <RecuiterContext.h>
#include <WeaponTransport.h>
#include <SuppliesTransport.h>
#include <AttackVessel.h>

class ArmoryFacade
{
public:
    /**
     * @brief Construct a new Armory Facade object
     *
     * @param countryName
     *
     */
    ArmoryFacade(std::string countryName);

    /**
     * @brief Destroy the Armory Facade object
     * 
     */
    virtual ~ArmoryFacade();

    /**
     * @brief Purchase weapons for recruits from Transport
     * 
     * @param recruits 
     * @return true 
     * @return false 
     */
    bool purchaseWeapon(Recruits* recruits);

    /**
     * @brief 
     * 
     * @param recruits 
     * @return true 
     * @return false 
     */
    bool purchaseAttackVessel(Recruits* recruits);

    /**
     * @brief 
     * 
     * @param recruits 
     * @return true 
     * @return false 
     */
    bool purchaseSupplies(Recruits* recruits);
private:
    TransportContext* transportContext;
    RecuiterContext* recruiterContext;
    std::string countryName;
    AttackVessel* attackVessel;
    SuppliesTransport* suppliesTransport;
    WeaponTransport* weaponTransport;
};

#endif //CONCRETEABSTRACTS_ARMORYFACADE_H
