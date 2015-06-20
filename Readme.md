# How to flash the ATtiny (with an Arduino Uno)

- choose a microcontroller compatible with V-USB...
- programm Arduino Uno with the "ArduinoISP" example
- ajust `makefile` options:
 - `MCU=attiny85` for example
  - possibly adjust `PROGRAMMER_MCU` also. For ATtiny85/45 this is not needed
 - `AVRDUDE_PROGRAMMERID=avrisp`
 - `AVRDUDE_PORT=/dev/ttyACM0` or to whatever port the Arduino Uno is connected to. You check which port to use by running `dmesg` right after you connect your Arduino. The last lines in the output should mention some `tty` port
 - `BAUD=19200`. This value must match the one in the `Serial.begin()` in the "ArduinoISP" example
- do `make`
- do `make install`
- set the fuses. This will disable the reset pin which will be used as any other pin, which means you will not be able to program this microcontroller anymore using the Arduino Uno. If you need to reverse this step you need a HVSP (High Voltage Serial Programmer)
 - the fuses differ from device to device. For ATtiny45 and 85 you want...


