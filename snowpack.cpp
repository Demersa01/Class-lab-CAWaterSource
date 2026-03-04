#include <iostream>
#include <string>

#include "snowpack.h"

SnowPack::SnowPack(std::string newname, double snowWaterContent)
    : WaterSource(newname, snowWaterContent),
      snowWaterContent(snowWaterContent)
{
}

void SnowPack::set_snowWaterContent(double snowWaterContent)
{
    this->snowWaterContent = snowWaterContent;
    // keep base class volume in sync with the snow water content
    setcurrentVolume(snowWaterContent);
}

double SnowPack::get_snowWaterContent() const
{
    return snowWaterContent;
}

void SnowPack::display() const
{
    std::cout << "Snow pack \"" << getName()
              << "\" has snow water content " << snowWaterContent
              << " inches and current volume " << getCurrentVolume()
              << std::endl;
}

