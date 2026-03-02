/**
 * Def of derived CAReservoir object, including
 * data for capacity, %capacity
 * and functionalities to create object with given values
 * and to display data
 */

#ifndef CLASS_LAB_CARESERVOIR_H
#define CLASS_LAB_CARESERVOIR_H

#include "watersource.h"

class CAReservoir : public WaterSource
{
public:
    /**
     * Overloaded constructor for Reservoir
     * @param capacity
     * @return none
     */
    CaliforniaReservoir(std::string name, int capacity, int percentageCap);

    /** Mutator method for capacity
     * @param int cap
     * @return no return
     */
     void setCapacity(int cap);

    /**
     * Accessor method for  capacity
     * @param no parameters
     * @return in capacity
     */
     int getCapacity() const;

     /**
      * Accessor method for percentage capacity
      * @param no parameters
      * @return in percentageCap
      */
      int getPrecentageCap() const;


    /**
      * Display object data to console
      * @param none
      * @return none
      */
    void display() const;

private:
    int capacity;
    int percentageCap;
};



#endif //CLASS_LAB_CARESERVOIR_H
