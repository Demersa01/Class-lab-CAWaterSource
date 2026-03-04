#include <iostream>
#include <string>

#include "CAReservoir.h"

CAReservoir::CAReservoir(std::string name, int capacity, int percentageCap)
    : WaterSource(name, capacity * (percentageCap / 100.0)),
      capacity(capacity),
      percentageCap(percentageCap)
{
}

void CAReservoir::setCapacity(int cap)
{
    capacity = cap;
    setcurrentVolume(capacity * (percentageCap / 100.0));
}

int CAReservoir::getCapacity() const
{
    return capacity;
}

int CAReservoir::getPrecentageCap() const
{
    return percentageCap;
}

void CAReservoir::display() const
{
    std::cout << "CA Reservoir \"" << getName()
              << "\" has capacity " << capacity
              << " and is " << percentageCap << "% full (current volume "
              << getCurrentVolume() << ")" << std::endl;
}

