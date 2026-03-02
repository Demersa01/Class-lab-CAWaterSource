/**
 * This file includes definition of base class water source
 * with data for name
 * and one display functions
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


private:
    std::string name;
    double currentVolume;

};


#endif //CLASS_LAB_WATERSOURCE_H
