// cipher 2: 
// Fibonacci

// Motor A connections
int enA = 5;
int in1 = 6;
int in2 = 7;
// Motor B connections
int enB = 10;
int in3 = 8;
int in4 = 9;

void setup() {
	// Set all the motor control pins to outputs
	pinMode(enA, OUTPUT);
	pinMode(enB, OUTPUT);
	pinMode(in1, OUTPUT);
	pinMode(in2, OUTPUT);
	pinMode(in3, OUTPUT);
	pinMode(in4, OUTPUT);
	

	// Turn off motors - Initial state
	digitalWrite(in1, LOW);
	digitalWrite(in2, LOW);
	digitalWrite(in3, LOW);
	digitalWrite(in4, LOW);

  analogWrite(enA, 255);
	analogWrite(enB, 255);
  

}

void loop() {
	turn_off();
  delay(1000); 
  turn_off();
  delay(1000);  
  
  turn_on();
  delay(1000);
  turn_off();
  delay(1000);

  turn_on();
  delay(1000);
  turn_off();
  delay(1000);

  turn_on();
  delay(1000);
  turn_on();
  delay(1000);
  turn_off();
  delay(1000);

  turn_on();
  delay(1000);
  turn_on();
  delay(1000);
  turn_on();
  delay(1000);
  turn_off();
  delay(1000);

  turn_on();
  delay(1000);
  turn_on();
  delay(1000);
  turn_on();
  delay(1000);
  turn_on();
  delay(1000);
  turn_on();
  delay(1000);
  turn_off();
  delay(1000);


}

void turn_on() {
	digitalWrite(in1, LOW);
	digitalWrite(in2, HIGH);
	digitalWrite(in3, LOW);
	digitalWrite(in4, HIGH);
	
}

void turn_off() {
 
	digitalWrite(in1, LOW);
	digitalWrite(in2, LOW);
	digitalWrite(in3, LOW);
	digitalWrite(in4, LOW);

}