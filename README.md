# Voltage Measurement measure analog voltage input from pin A0 and calculate the corresponding voltage value using an Arduino board.

## Description

This code is designed to measure analog voltage input from pin A0 and calculate the corresponding voltage value using an Arduino board. Here's a breakdown of the code:

- `int voltageV = A0;`: Declares a variable `voltageV` and assigns it the value of pin A0, indicating that this pin will be used as the input pin for voltage measurement.

- `void setup() {...}`: The setup function runs once when the microcontroller starts. In this function:
  - `pinMode(voltageV, INPUT);`: Configures the pin `voltageV` (which is A0) as an input pin, indicating that it will be used to read analog data.

- `void loop() {...}`: The loop function runs repeatedly as long as the microcontroller is powered. In this function:
  - `int VoltageMsmt = analogRead(voltageV);`: Reads the analog voltage from pin A0 and stores the raw ADC (Analog to Digital Converter) value in the variable `VoltageMsmt`.
  - `float Vcalc = (5.0/1023) * VoltageMsmt;`: Calculates the corresponding voltage value using the formula `(5.0/1023) * VoltageMsmt`, where 5.0 represents the maximum voltage range (5 volts for most Arduino boards), and 1023 is the maximum ADC value.
