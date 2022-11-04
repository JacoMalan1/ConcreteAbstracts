/**
 * @file Country.h
 * @author ConcreteAbstracts 
 * @brief 
 * @version 0.1
 * @date 2022-10-24
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#ifndef COUNTRY_H
#define COUNTRY_H

#include <string>
#include <vector>
#include <Marine.h>
#include <Soldier.h>
#include <Guardian.h>
#include <Pilot.h>
#include <Medic.h>
#include <WarTheatre.h>
#include <Sea.h>
#include <Land.h>
#include <Air.h>
#include <Space.h>
#include <Trenches.h>
#include <Barricades.h>
#include <Mines.h>
#include <SpaceMagnets.h>
#include <Recruits.h>
#include <Citizens.h>
#include <Refugee.h>
#include <ArmoryFacade.h>

class Recruits;

enum EconomicClass
{
    FIRST_WORLD = 1,
    SECOND_WORLD = 2,
    THIRD_WORLD = 3
};

// enum LocationTypes
// {
//   Land = 0,
//   Sea = 1,
//   Air = 2,
//   Space = 3
// };

class Country
{
public:
    /**
     * @brief Construct a new Country object
     * 
     * @param countryName 
     */
    explicit Country(std::string countryName);

    /**
     * @brief 
     * 
     * @return Country* 
     */
    Country* cloneCountry();

    /**
     * @brief Get the Name object
     * 
     * @return const std::string& 
     */
    const std::string& getName() const;

      /**
     * @brief Get the NotEnlisted object
     *
     * @return int
     */
    int getNotEnlisted() const;
    
     /**
     * @brief Setter for the NotEnlisted object
     *
     * @param Amount
     */
    void setNotEnlisted(int Amount);

    /**
     * @brief Set the Population object
     * 
     * @param population 
     */
    void setPopulation(int population);

    /**
     * @brief Get the Population object
     *
     * @return int
     */
    int getPopulation() const;

    /**
     * @brief Get the Power object
     * 
     * @return int 
     */
    int getPower() const;

    /**
     * @brief Set the Power object
     * 
     * @param power 
     */
    void setPower(int power);

    /**
     * @brief Get the Economy object
     * 
     * @return int 
     */
    int getEconomy() const;

    /**
     * @brief Set the Economy object
     * 
     * @param economy 
     */
    void setEconomy(int economy);
     /**
     * @brief Recruits Soldiers
     *
     * @param squadSize
     */
    void recruitSoldiers(int squadSize);
     /**
     * @brief Recruits Guardians
     *
     * @param squadSize
     */
    void recruitGuardians(int squadSize);
     /**
     * @brief Recruits Medics
     *
     * @param squadSize
     */
    void recruitMedics(int squadSize);
     /**
     * @brief Recruits Marines
     *
     * @param squadSize
     */
    void recruitMarines(int squadSize);
     /**
     * @brief Recruits Pilots
     * s
     * @param squadSize
     */
    void recruitPilots(int squadSize);
     /**
     * @brief gets the index of the wartheatre type. Land =0, Sea=1, Air=2, Space =3
     * @param Type
     * @return int
     */
    int getIndex(const std::string& Type);

    /**
     * @brief Updates the population size by counting the survivers.
     *
     */
    void updatePopulationSize();

     /**
     * @brief Updates the power of a country
     *
     */
    void updatePower();

     /**
     * @brief Adds warTheatre. If the warTheatre type already exists does nothing. ?Only add if relevent recruits exist?
     * @param location
     */
    void addWarFront(const std::string& location);
      /**
     * @brief returns specified wartheatre if it exists
     * @param Type
     */
    WarTheatre* getWarFront(const std::string& Type);

     /**
     * @brief Adds traps to avalable wartheatres. ? Restricts the what kinds of traps can be added to a wartheatre.
     * @param battleGround
     * @param TrapName 
     * 
     */
    void setTrap(const std::string& battleGround, const std::string& TrapName );
     /**
     * @brief removes wartheatre
     * @param Location
     * 
     */
    void removeFront(const std::string& Location);

    /**
     * @brief retrieves total damage from all or individual warfronts. parameter Land, Sea, Air, Space, All. Calls damageTotal so will decrease trap lifespan
     * @param totalOf
     * @return int
     */
    int warFrontDanger(const std::string& totalOf);

     /**
     * @brief returns a string of all wartheatres
     * @return string
     */
    std::string allWarFronts();

    /**
     * @brief Get the Recruits object
     * 
     * @return std::vector<Recruits*> 
     */
    std::vector<Recruits*> getRecruits();

    /**
     * @brief Set the Recruits object
     * 
     * @return std::vector<Recruits*> 
     */
    void setRecruits(std::vector<Recruits*> recruits);

    /**
     * @brief Destroy the Country object
     * 
     */
    ~Country();

    /**!
     * @brief Get an instance of the ArmoryFacade for the country being worked on.
     *
     * @return
     */
    const ArmoryFacade &getArmoryFacade() const;

    const std::vector<Recruits *> &getRecruits() const;

    const Recruits* getRecruit(int i) const;

    /**
     * @brief Get the Refugee object
     * 
     * @return Refugee* 
     */
    Refugee* getRefugees();

    /**
     * @brief Set the Refugee object
     * 
     * @return Refugee* 
     */
    void setRefugees(Refugee* refugees);

    /**
     * @brief Get the Citizens object
     * 
     * @return Citizens* 
     */
    Citizens* getCitizens();

    /**
     * @brief Set the Citizens object
     * 
     * @return Citizens* 
     */
    void setCitizens(Citizens* citizens);

    /**
     * @brief
     *
     * @return Returns the economic class of the Country.
     */
    EconomicClass getEconomicClass() const;

protected:

private:
    std::string countryName;
    int power;
    int populationSize;
    int economy;
    int notEnlisted;
    EconomicClass economicClass;
    // bool Marines;
    // bool Guardians;
    // bool Pilots;
    // bool Soldiers;
    WarTheatre** warTheatres;
    std::vector<Recruits*> recruits;
    Citizens* citizens;
    Refugee* refugees;
    ArmoryFacade armoryFacade;

};

#endif
