// BabySCRU-FE Ultra Sonic Test Code by rtheiss.com


#define trigPin 11
#define echoPin 12

#include <Servo.h> 

Servo Lservo;  // servo on baby SCRU-FE's left side (if you were looking in the same direction as the robot)
Servo Rservo;  // servo on baby SCRU-FE's right side (if you were looking in the same direction as the robot)

void setup() 
{ 
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
    
  Lservo.attach(14);
  Lservo.write(90);  // set servo to Stop

  Rservo.attach(16);
  Rservo.write(90);  // set servo to Stop
} 

void loop () 
{   
  int duration, distance;
      ping ();
      if (distance <= 15 || distance >= 0)
      {
        backward ();
        delay(100);
        brake ();
      }
}


void ping () 
{     // Ping Utrasonic Sensor to find obstacles within distance in cm    
    int duration, distance;
  digitalWrite(trigPin, HIGH);
  delay(1);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = (duration/2) / 29.1;
}

void backward () 
{   
    
   Lservo.write(0);  
   Rservo.write(180); 

}

void brake () 
{   
   Lservo.write(90);  
   Rservo.write(90); 
}

