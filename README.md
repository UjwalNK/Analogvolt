# AnalogVolt
This project helps you set the required voltage to a given analog pin on the Arduino board using the familiar Arduino IDE and this library.

# Project State: Aplha _Initial Release_

# Contributing
For minor fixes of code and documentation, please go ahead and submit a pull request. 
Working on them is a great way to contribute to the large Arduino community. 
Larger changes (rewriting parts of existing code from scratch, adding new functions & including new libraries) must be discussed by opening an issue first.Please select the issues on the issues page.

# Who can contribute?
Any one with C++ programming experience and Arduino.

# Contact:
  Email:ujwal2nk@gmail.com

# Syntaxes:
  [(Usage syntaxes)]
  analogWrite(pin, aWriteVolt(volt)); // It converts the required voltage to the value required by the analogWrite func.      
  aWriteVolt(pin, volt); // Replace the 'pin' with the pin on Arduino & 'volt' with the requird voltage. 
  <variable> = double   aReadVolt(int pin, int precision); // The voltage read on the pin is stored in the variable.
  
  [(Available syntaxes)]
   aWriteVolt(double volt); // return type double
   aWriteVolt(int pin, double volt); //replaces analogWrite func.
   aReadVolt(int pin, int precision); // returns double voltage.
