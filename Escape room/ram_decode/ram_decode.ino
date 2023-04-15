#include <SoftwareSerial.h>

SoftwareSerial mySerial(17,16); // RX, TX
 int s=0;
//int led=2;
int relay =28;
int i=0;
char res[9]="22121887";
void setup() {
  pinMode(relay, OUTPUT);
   
   digitalWrite(relay,LOW); // lock
   mySerial.begin(9600);
  //mySerial.begin(13832);
  
  Serial.begin(115200);
  // put your setup code here, to run once:
 }
void loop() {
  
  while(1){
      if(mySerial.available()>0){
          Serial.println("2");
          s=mySerial.read();
          Serial.print(s);
          //Serial.println(res[i]);
          if(s==res[i])
          {    
              i++;
              Serial.println(i);
          }
         else 
            i=0;
           if(i==8) 
           {  Serial.println("done");
               
               digitalWrite(relay,HIGH);
               break;
           }
      }
   }
digitalWrite(relay,HIGH);            
}
