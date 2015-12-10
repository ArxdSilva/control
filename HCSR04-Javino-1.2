//Programa: Conectando Sensor Ultrassonico HC-SR04 ao Arduino-RaspberryPi
//Autor: Arthur Silva
 
//Carrega a biblioteca do sensor ultrassonico
#include <Ultrasonic.h>
#include <Javino.h>

//Definicao das variaveis:

 Javino j;

//Define os pinos para o trigger e echo
#define pino_trigger 13
#define pino_echo 12

//variaveis que definem as determinadas portas em que os motores serao usados.
    int IN1 = 4;
    int IN2 = 5;
    int IN3 = 6;
    int IN4 = 7;
    int IN5 = 8;
    int IN6 = 9;
    int IN7 = 10;
    int IN8 = 11;
 
//Inicializa o sensor nos pinos definidos acima
Ultrasonic ultrasonic(pino_trigger, pino_echo);
 
void setup()
{

  //define o tipo de cada pino de cada motor
      pinMode(IN1, OUTPUT);
      pinMode(IN2, OUTPUT);
      pinMode(IN3, OUTPUT);
      pinMode(IN4, OUTPUT);
      pinMode(IN5, OUTPUT);
      pinMode(IN6, OUTPUT);
      pinMode(IN7, OUTPUT);
      pinMode(IN8, OUTPUT);
  
  Serial.begin(9600);
  Serial.println("Lendo dados do sensor...");
}
 
void loop()
{
  if (j.availablemsg()){answer(j.getmsg());}
 
}

void answer(String ask) {
       answer(j.getmsg());
         
       if (ask == "goAhead"){goAhead();}
               else if (ask == "goBack"){goBack();}
               else if (ask == "turnLeft"){turnLeft();}
               else if (ask == "turnRight"){turnRight();}
               else if (ask == "status") {Distance();}
               else (ask == "Stop") {Stop();}
}

//Envia a distancia do objeto mais proximo a Raspberry
    void Distance() {

//Le as informacoes do sensor em cm
  double Xg;
  String Xout;
  float cmMsec;
  long microsec = ultrasonic.timing();
  cmMsec = ultrasonic.convert(microsec, Ultrasonic::CM);

  //Exibe informacoes no serial monitor
  Serial.print("Distancia em cm: ");
  Serial.println(cmMsec);
  delay(100);
    Xg=double(cmMsec);
    Xout=String(Xg);

       j.sendmsg(Xout);
        Serial.println("Enviado: ", Xout);
        Serial.println(cmMsec);
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

   delay(500);
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

   delay(500);
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

   delay(500);
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

   delay(500);
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

   delay(500);
  }
