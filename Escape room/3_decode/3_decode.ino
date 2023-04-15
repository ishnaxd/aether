
//final decoding code (raspberry pi pico)
#define PIN 16
#define led1 2
#define led2 3
#define led3 4
#define lock 28
int lock1=0,lock2=0,lock3=0 ;
int flag=0;
int cqd_flag=0;
unsigned long duration ;
void setup() {
  Serial.begin(115200);
  pinMode(PIN, INPUT);
  pinMode(led1,OUTPUT);
    pinMode(led2,OUTPUT);
      pinMode(led3,OUTPUT);
//      digitalWrite(led3,HIGH);
       pinMode(lock,OUTPUT);
  // put your setup code here, to run once:

}
void pwm_decode(){
  duration = pulseIn(PIN, HIGH);
  Serial.println(duration);
  if((duration >=500 && duration <=600) || lock2 == 1){
    digitalWrite(led1,HIGH);
     lock2=1;
    
    
  }
  else{
    digitalWrite(led1,LOW);
    
  }
 
}
void sq_decode(){
  duration = pulseIn(PIN, HIGH);
  Serial.println(duration);
  if((duration >=200000 && duration <=300000) || lock1 == 1){
    digitalWrite(led2,HIGH);
//     flag++;
lock1=1;

    
    
  }
  else{
    digitalWrite(led2,LOW);
    
  }
  
}
void CWD_decode(){
   duration = pulseIn(PIN, HIGH);
  Serial.println(duration);

    if((duration >=100010 && duration <=100020) && cqd_flag<=2){
    cqd_flag++;
   }

  
  if((duration>=200015 && duration<=200030) || lock3 == 1){
    digitalWrite(led3,HIGH);
    cqd_flag=0;
    lock3=1;
   
  }
  else{
    digitalWrite(led3,LOW);
    
  }
}

void loop() {
   if( lock1!=1){
    sq_decode();
   }
   else if(lock2!=1 && lock1==1){
      pwm_decode();
      
    }
    else if(lock3!=1 && lock2==1){
      CWD_decode();
   }
  
 
  if(lock1==1 && lock2==1 && lock3==1){
   digitalWrite(lock,HIGH);
    
  }
  else{
    digitalWrite(lock,LOW);
  }
//  Serial.println(flag);
//  SOS_decode();
  
  
  // put your main code here, to run repeatedly:

}
