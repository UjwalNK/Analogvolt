/*
    AnalogVolt.cpp - Library for controlling the voltage of analog pin
    Created by Ujwal N.K., May 08, 2019.
    Released into public domain.
*/

#include "Arduino.h"
#include "AnalogVoltage.h"

double AnalogVoltage::aWriteVolt(double volt){
    return AnalogVoltage::convert2Value(volt);
}

void AnalogVoltage::aWriteVolt(int pin, double volt){
    pinMode(pin, OUTPUT);
    analogWrite(pin, AnalogVoltage::convert2Value(volt));
}

double AnalogVoltage::aReadVolt(int pin, int precision){
    pinMode(pin, INPUT);
    double volt = AnalogVoltage::convert2Volt(analogRead(pin));
    return volt;
}

//Convertion functions:

double AnalogVoltage::convert2Value(double value){
    double volt = 0;
    volt = map(value, 0, 5, 0, 255);
    return volt;
}

double AnalogVoltage::convert2Volt(double volt){
    double value = 0;
    volt = map(value, 0, 255, 0, 5);
    return value;
}
