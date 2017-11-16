
#include "WidgetThermometer.h"


WidgetThermometer::WidgetThermometer(uint8_t ucItem)
{
    _Item=ucItem;
    memset(pDataTemperatureTopic,0,sizeof(pDataTemperatureTopic));
    sprintf(pDataTemperatureTopic,"channel/thermometer_%d/data/temperature",_Item);
}

WidgetThermometer::~WidgetThermometer()
{
}

void WidgetThermometer::begin(void (*UserCallBack)(void))
{
}

void WidgetThermometer::displayTemperature(char temperature)
{
	IntoRobot.publish(pDataTemperatureTopic,temperature);
}









