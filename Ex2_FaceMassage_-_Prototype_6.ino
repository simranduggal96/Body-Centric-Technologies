void setup() {
//start serial connection
Serial.begin(9600);
//configure pin 2 as an input and enable the internal pull-up resistor
pinMode(12, INPUT_PULLUP);
pinMode(13, OUTPUT);
pinMode(14, OUTPUT);

}

void loop() {
//read the pushbutton value into a variable
int sensorVal1 = digitalRead(12);
//print out the value of the pushbutton
Serial.println(sensorVal1);
// Keep in mind the pull-up means the pushbutton's logic is inverted. It goes
// HIGH when it's open, and LOW when it's pressed. Turn on pin 13 when the
// button's pressed, and off when it's not:
if (sensorVal1 == HIGH) {
digitalWrite(13, LOW);
delay(5000);
digitalWrite(14, LOW);
delay(500);
} else {
digitalWrite(13, HIGH);
delay(5000);
digitalWrite(14, HIGH);
delay(500);
}
}
