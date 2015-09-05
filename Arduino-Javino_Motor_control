#include <Javino.h>
Javino j;
int IN1 = 4;
int IN2 = 5;
int IN3 = 6;
int IN4 = 7;
int IN5 = 8;
int IN6 = 9;
int IN7 = 10;
int IN8 = 11;

void setup() {
 pinMode(IN1, OUTPUT);
 pinMode(IN2, OUTPUT);
 pinMode(IN3, OUTPUT);
 pinMode(IN4, OUTPUT);
 pinMode(IN5, OUTPUT);
 pinMode(IN6, OUTPUT);
 pinMode(IN7, OUTPUT);
 pinMode(IN8, OUTPUT);
  Serial.begin(9600);
  }
void loop() {
  if (j.availablemsg()){answer(j.getmsg());}}
    
  void answer(String ask) {
   answer(j.getmsg());
    if (ask == "goAhead"){goAhead();}
      else if (ask == "goBack"){goBack();}
        else if (ask == "turnLeft"){turnLeft();}
          else if (ask == "turnRight"){turnRight();}
            else if (ask == "Stop");{Stop();}
         
  //  if (j.availablemsg())=="goAhead"{goAhead(j.getmsg());}
  //  else if (j.availablemsg())=="goBack"{goBack(j.getmsg());}
  //  else if (j.availablemsg())=="turnLeft"{turnLeft(j.getmsg());}
  //  else if (j.availablemsg())=="turnRight"{turnRight(j.getmsg());}
  //  else if (j.availablemsg())=="Stop"{Stop(j.getmsg());}
}
  void goAhead() {
   //Gira o Motor A
 digitalWrite(IN1, LOW);
 digitalWrite(IN2, HIGH);
 //Gira o Motor B 
 digitalWrite(IN3, HIGH);
 digitalWrite(IN4, LOW);
 //Gira o Motor C 
 digitalWrite(IN5, LOW);
 digitalWrite(IN6, HIGH);
 //Gira o Motor D 
 digitalWrite(IN7, LOW);
 digitalWrite(IN8, HIGH);
   }
  
  void goBack() {
   //Gira o Motor A
 digitalWrite(IN1, HIGH);
 digitalWrite(IN2, LOW);
 //Gira o Motor B 
 digitalWrite(IN3, LOW);
 digitalWrite(IN4, HIGH);
 //Gira o Motor C 
 digitalWrite(IN5, HIGH);
 digitalWrite(IN6, LOW);
 //Gira o Motor D 
 digitalWrite(IN7, HIGH);
 digitalWrite(IN8, LOW);
   }
  
    void turnLeft() {
 //Gira o Motor A 
 digitalWrite(IN1, HIGH);
 digitalWrite(IN2, LOW);
 //Gira o Motor B 
 digitalWrite(IN3, LOW);
 digitalWrite(IN4, HIGH);
 //Gira o Motor C 
 digitalWrite(IN5, LOW);
 digitalWrite(IN6, HIGH);
 //Gira o Motor D 
 digitalWrite(IN7, LOW);
 digitalWrite(IN8, HIGH);
   }
   void turnRight() {
 //Gira o Motor A 
 digitalWrite(IN1, LOW);
 digitalWrite(IN2, HIGH);
 //Gira o Motor B 
 digitalWrite(IN3, HIGH);
 digitalWrite(IN4, LOW);
 //Gira o Motor C 
 digitalWrite(IN5, HIGH);
 digitalWrite(IN6, LOW);
 //Gira o Motor D 
 digitalWrite(IN7, HIGH);
 digitalWrite(IN8, LOW);
   }
 void Stop() {
 //Gira o Motor A 
 digitalWrite(IN1, LOW);
 digitalWrite(IN2, LOW);
 //Gira o Motor B 
 digitalWrite(IN3, LOW);
 digitalWrite(IN4, LOW);
 //Gira o Motor C 
 digitalWrite(IN5, LOW);
 digitalWrite(IN6, LOW);
 //Gira o Motor D 
 digitalWrite(IN7, LOW);
 digitalWrite(IN8, LOW);
    
}
