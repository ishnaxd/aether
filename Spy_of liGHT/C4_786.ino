cipher 4:

quad intensity 786

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
//01 11 10 00 01 10

turn_on();
send_01();
delay(1000);

turn_on();
send_11();
delay(1000);

turn_on();
send_10();
delay(1000);

turn_on();
send_00();
delay(1000);

turn_on();
send_01();
delay(1000);

turn_on();
send_10();
delay(1000);

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