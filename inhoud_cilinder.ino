#include <ESP8266WiFi.h>

int Diameter;
int Length;
float ans;

void setup() {
  Serial.begin(115200);
  Serial.println();
  Serial.println(PI);
  Serial.println("Please input the Diameter of the cilinder.");
  while(Serial.available()==0){}
  Diameter = Serial.parseInt();
  Serial.println(Diameter);
  Serial.println("Great! Now please input the length of the cilinder.");
  while(Serial.available()==0){}
  Length = Serial.parseInt();
  Serial.println(Length);
  ans = calculateCilinder(Diameter, Length);
  Serial.println("Great! I have now calculated the volume of the cilinder! It's: " + String(ans));
}

float calculateCilinder(int D, int L){
    //PI*(r^2)*h
    return PI*((D/2)*(D/2))*L;
}

void loop() {

}
