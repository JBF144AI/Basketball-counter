#include <Arduino.h>

#define IR_sensor  3
#define Vibration_sensor  4
#define led  5
#define button  6
int shoots_on_goal = 0;
int rim_hits = 0;
int rim_shoots_on_goal = 0;
int airballs = 0;
int shoots = 0;
int fg = 0;
bool currentState;
bool previousState = LOW;

bool rimDetected = false;

void setup() {
  pinMode(IR_sensor, INPUT);
  pinMode(Vibration_sensor, INPUT);
  pinMode(led, OUTPUT);
  pinMode(button, INPUT_PULLUP);
  Serial.begin(9600);
}

void loop() {
  currentState = digitalRead(IR_sensor);
   
  if (digitalRead(button) == LOW) {
      delay(2500);
      digitalWrite(led, HIGH);  
      delay(1500);               
      digitalWrite(led, LOW);  
         currentState = digitalRead(IR_sensor);
    
      shoots++;
  
  if (digitalRead(Vibration_sensor) == LOW) {
    rim_hits++;
    rimDetected = true;
  }
  
   if (currentState == HIGH && previousState == LOW) {
    shoots_on_goal++;
  


   if(rimDetected) {
    rim_shoots_on_goal++;
    rimDetected = false;
     }
   }

   else if ((digitalRead(Vibration_sensor) == LOW ) && (digitalRead(IR_sensor) == LOW )) {
    airballs++;
   }
  

  float fg = 0;
if (shoots > 0) {
  fg = (float)shoots_on_goal / (float)shoots * 100.0;
}

  Serial.print("Total shoots: ");
    Serial.println(shoots);

    Serial.print("Shoots on goal: ");
    Serial.println(shoots_on_goal);

    Serial.print("shoots how hit rim: ");
    Serial.println(rim_hits);

    Serial.print("shoots on goal with rim: ");
    Serial.println(rim_shoots_on_goal);

    Serial.print("Airballs: ");
    Serial.println(airballs);

    Serial.print("FG%:");
    Serial.println(fg);

    previousState = currentState;

  delay(100); 
}
}
