/*
    AnalogVolt.cpp - Library for controlling the voltage of analog pin
    Created by Ujwal N.K., May 08, 2019.
    Released into public domain.
*/

#include "Arduino.h"
#include "AnalogVolt.h"

double AnalogVolt::aWriteVolt(double volt){
    return AnalogVolt::convert2Value(volt);
}

void AnalogVolt::aWriteVolt(int pin, double volt){
    pinMode(pin, OUTPUT);
    analogWrite(pin, AnalogVolt::convert2Value(volt));
}

double AnalogVolt::aReadVolt(int pin, int precision){
    pinMode(pin, INPUT);
    double volt = AnalogVolt::convert2Volt(analogRead(pin));
    return volt;
}

//Convertion functions:

double AnalogVolt::convert2Value(double value){
    double volt = 0;
    volt = map(value, 0, 5, 0, 255);
    return volt;
}

double AnalogVolt::convert2Volt(double volt){
    double value = 0;
    volt = map(value, 0, 255, 0, 5);
    return value;
}
