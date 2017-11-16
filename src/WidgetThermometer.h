#ifndef WIDGET_THERMOMETER_H_
#define WIDGET_THERMOMETER_H_

#include "application.h"


class WidgetThermometer
{
public:
    WidgetThermometer(uint8_t ucItem = 0);
    ~WidgetThermometer();
    void begin(void (*UserCallBack)(void) = NULL);
    void displayTemperature(char temperature);

private:
    char pDataTemperatureTopic[64];
    uint8_t _Item=0;         
};

#endif
