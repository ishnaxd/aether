int green=2;
int red =3;
int blue =4;

void setup() {
  pinMode(red,OUTPUT);
   pinMode(green,OUTPUT);
    pinMode(blue,OUTPUT);
  // put your setup code here, to run once:

}

void loop() {
  digitalWrite(red,LOW);
   digitalWrite(green,LOW);
    digitalWrite(blue,LOW);
    delay(100);
    digitalWrite(red,LOW);
   digitalWrite(green,LOW);
    digitalWrite(blue,HIGH);
    delay(100);
    digitalWrite(red,LOW);
   digitalWrite(green,HIGH);
    digitalWrite(blue,LOW);
    delay(100);
    digitalWrite(red,LOW);
   digitalWrite(green,HIGH);
    digitalWrite(blue,LOW);
    delay(100);
    digitalWrite(red,HIGH);
   digitalWrite(green,HIGH);
    digitalWrite(blue,LOW);
    delay(100);
    digitalWrite(red,HIGH);
   digitalWrite(green,HIGH);
    digitalWrite(blue,HIGH);
    delay(100);
    digitalWrite(red,HIGH);
   digitalWrite(green,LOW);
    digitalWrite(blue,HIGH);
    delay(100);
    digitalWrite(red,HIGH);
   digitalWrite(green,LOW);
    digitalWrite(blue,LOW);
    delay(100);
    
  
  
  // put your main code here, to run repeatedly:

}