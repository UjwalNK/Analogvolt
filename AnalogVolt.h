/*
    AnalogVolt.h - Library for controlling the voltage of an analog pin.
    Created by Ujwal N.K. May 8, 2019.
    Released into public domain.
*/

#include "Arduino.h"

#ifndef AnalogVoltage_h
#define AnalogVoltage_h

class AnalogVoltage
{
    public:
    double aWriteVolt(double volt); 
    void aWriteVolt(int pin, double volt);
    double aReadVolt(int pin, int precision);

    private:
    double convert2Volt(double value);
    double convert2Value(double volt);
};
#endif
