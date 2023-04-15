int  RELAIS=28;
int led1 =2;
int led2 =3;
int led3 =4;
//basic code for checking the lock system
// no algorithm involved
void setup() {
  pinMode(RELAIS,OUTPUT);
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
}

void loop() {
  //low is unlock
  //high is lock
//  digitalWrite(RELAIS, HIGH);  
  delay(500);
  digitalWrite(led1, HIGH); 
  delay(500);
  digitalWrite(led2, HIGH); 
  delay(500);
  digitalWrite(led3, HIGH); 
  delay(500);
  
  digitalWrite(RELAIS,LOW);  
  delay(500);
  digitalWrite(led1, LOW); 
  delay(500);
  digitalWrite(led2, LOW); 
  delay(500);
  digitalWrite(led3, LOW); 
  delay(500);
  //low is lock
}
