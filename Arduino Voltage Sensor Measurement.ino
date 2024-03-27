int voltageV=A0; //it is the input pin
void setup() {
  // put your setup code here, to run once:
  pinMode(voltageV, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int VoltageMsmt = analogRead(voltageV);
  float Vcalc = (5.0/1023)*VoltageMsmt;
}
