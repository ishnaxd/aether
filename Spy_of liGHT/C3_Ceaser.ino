// cipher 3:
// MU - Caesars cipher - ascii

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
//MU - JR - 74 82
//0 1 0 0 1 0 1 0 0 1 0 1 0 0 1 0 

turn_off();
delay(500);

turn_on();
delay(500);

turn_off();
delay(500);

turn_off();
delay(500);

turn_on();
delay(500);

turn_off();
delay(500);

turn_on();
delay(500);

turn_off();
delay(500);

turn_off();
delay(500);

turn_on();
delay(500);

turn_off();
delay(500);

turn_on();
delay(500);

turn_off();
delay(500);

turn_off();
delay(500);

turn_on();
delay(500);

turn_off();
delay(500);


}


void send_00(){
  analogWrite(enA, 0);
	analogWrite(enB, 0);
}

void send_01(){
  analogWrite(enA, 70);
	analogWrite(enB, 70);
}

void send_10(){
  analogWrite(enA, 160);
	analogWrite(enB, 160);
}

void send_11(){
  analogWrite(enA, 250);
	analogWrite(enB, 250);
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