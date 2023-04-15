/// Motor A connections
//one fourth 
int enA = 3;
int in1 = 4;
int in2 = 5;
// Motor B connections
int enB = 9;
int in3 = 6;
int in4 = 7;

int num=0;
//int fibo[10]={0,1,1,2,3,5,8,13,21,34};
int fibo[2]={3,8};
//int sca_fibo[10];
int sca_fibo[2] = {200,250};

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

  analogWrite(enA, 0);
  analogWrite(enB, 0);

 
 // int i;
 // for(i=0;i<2;i++)
 //   sca_fibo[i]=map(fibo[i],0,8,0,255);

}

void loop() {
 // lightControl();
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH);

  
  analogWrite(enA, 50);
  analogWrite(enB, 50);
  delay(2000);
  
  analogWrite(enA, 200);
  analogWrite(enB, 200);
  delay(2000);

}

void lightControl() {
  // Set motors to maximum speed
  // For PWM maximum possible values are 0 to 255
 
  analogWrite(enA, sca_fibo[num]);
  analogWrite(enB, sca_fibo[num]);
  num++;
//  if(num==10)
if(num==2)
    num=0;
  // Turn on motor A & B
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH);

  delay(2000);  
}
