#include <iostream>
#include <string>

#include "watersource.h"

WaterSource::WaterSource(std::string newname, double newVolume)
    : name(newname), currentVolume(newVolume)
{
}

void WaterSource::display()
{
    std::cout << "Water source \"" << name << "\" has current volume "
              << currentVolume << std::endl;
}

std::string WaterSource::getName() const
{
    return name;
}

void WaterSource::setName(std::string name)
{
    this->name = name;
}

double WaterSource::getCurrentVolume() const
{
    return currentVolume;
}

void WaterSource::setcurrentVolume(double currentVolume)
{
    this->currentVolume = currentVolume;
}



