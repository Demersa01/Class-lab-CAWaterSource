/**
 * Def of derived CAReservoir object, including
 * data for capacity, %capacity
 * and functionalities to create object with given values
 * and to display data
 */

#ifndef CLASS_LAB_CARESERVOIR_H
#define CLASS_LAB_CARESERVOIR_H

#include "watersource.h"

class Reservoir : public WaterSource
{
public:
    /**
     * Overloaded constructor for Reservoir
     * @param capacity
     * @return none
     */
    Reservoir(double capacity);

    /**
      * Display object data to console
      * @param none
      * @return none
      */
    void display();

private:
    double capacity;
};



#endif //CLASS_LAB_CARESERVOIR_H
