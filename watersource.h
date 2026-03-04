#include <iostream>

/**
 * This file includes definition of base class water source
 * with data for name
 * and one display functions
 *
 * Anakin March 2,2026
 */

#ifndef CLASS_LAB_WATERSOURCE_H
#define CLASS_LAB_WATERSOURCE_H


class WaterSource
{
public:
    /**
     * create a overloaded constructor for a watersource object with
     * @param name
     *
     */
     WaterSource(std::string newname, double newVolume);


     /**
      * Display object data to console
      * @param none
      * @return none
      */
      void display();

      /**
       * getter for name
       * @param none
       * @return
       */
      std::string getName() const;

    /**
     * setter for name
     * @param name
     * @return
     */
      void setName(std::string name);

    /**
     * getter for volume
     * @param none
     * @return
     */
      double getCurrentVolume() const;


    /**
     * setter for volume
     * @param currentVolume
     * @return
     */
      void setcurrentVolume(double currentVolume);


private:
    std::string name;
    double currentVolume;

};


#endif //CLASS_LAB_WATERSOURCE_H
