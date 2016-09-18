#include <Javino.h>
int echoPin = 12; //Pino recebe o pulso do echo
int trigPin = 13; //Pino envia o pulso para gerar o echo

Javino jBridge;
String msg="";
int IN1 = 4;
int IN2 = 5;
int IN3 = 6;
int IN4 = 7;
int IN5 = 8;
int IN6 = 9;
int IN7 = 10;
int IN8 = 11;
String dist;

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
  
 if(jBridge.availablemsg()){
     msg = jBridge.getmsg();
   }
   if(msg=="goAhead") {
     goAhead();
   }  
   if(msg=="Stop") {
     Stop();
   } 
   if(msg=="turnRight") {
     turnRight();
   } 
   if(msg=="turnLeft") {
     turnLeft();
   } 
   if(msg=="goBack") {
     goBack();
   } 
    if(msg=="status") {
     comm();
    }
digitalWrite(trigPin, LOW);   //seta o pino 12 com um pulso baixo "LOW" ou desligado ou ainda 0
  delayMicroseconds(2);   // delay de 2 microssegundos
  digitalWrite(trigPin, HIGH);   //seta o pino 12 com pulso alto "HIGH" ou ligado ou ainda 1
  delayMicroseconds(10);   //delay de 10 microssegundos
  digitalWrite(trigPin, LOW);   //seta o pino 12 com pulso baixo novamente
  long duration = pulseIn(echoPin, HIGH);  //pulseInt lÃª o tempo entre a chamada e o pino entrar em high
  long distancia = duration / 29 / 2 ;  //Esse calculo Ã© baseado em s = v . t, lembrando que o tempo vem dobrado porque Ã© o tempo de ida e volta do ultrassom
  Serial.print("Distancia em CM: ");
  Serial.println(distancia);
  delay(300);
   msg="";
   dist = String(distancia);
  //jBridge.sendmsg(dist);
}

void comm() {
  jBridge.sendmsg(dist);
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
