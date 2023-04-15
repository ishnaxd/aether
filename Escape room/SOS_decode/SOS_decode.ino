
#define PIN 16
#define led1 3
//CWD decode
void setup()
{
  Serial.begin(115200);
  pinMode(PIN, INPUT);
  pinMode(led1,OUTPUT);
}
void loop()
{
  unsigned long duration = pulseIn(PIN, HIGH);
  Serial.println(duration);
  if(duration >=250000 && duration <=350000){
    digitalWrite(led1,HIGH);
    
    
  }
  else{
    digitalWrite(led1,LOW);
    
  }
}
