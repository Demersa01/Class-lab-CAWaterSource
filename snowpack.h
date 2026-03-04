#include <iostream>
/**
 * def of derived snowpack object, including
 * snowWaterContent in inches
 * and funcionalities to
 * - create a object with given values
 * - access object data
 * - change pbject data
 * - display object data
 *
 *
 */

#ifndef CLASS_LAB_SNOWPACK_H
#define CLASS_LAB_SNOWPACK_H

#include "watersource.h"

class SnowPack : public WaterSource
{
public:
    /**
     *create a snowpack object with the given name and volume
     * @param snowWaterContent
     * @return none
     */
     SnowPack(std::string newname,double snowWaterContent);

     /**
      * setter
      * @param snowWaterContent
      * @return none
      */
     void set_snowWaterContent(double snowWaterContent);

     /**
      * getter for snowWaterContent
      * @param none
      * @return value
      */
     double get_snowWaterContent() const;

    /**
    * Display object data to console
    * @param none
    * @return none
    */
     void display() const;


private:
    double snowWaterContent; //in inches

};

#endif //CLASS_LAB_SNOWPACK_H
