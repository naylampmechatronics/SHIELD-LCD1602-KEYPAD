// ---------------------------------------------------------------------------
// Created by David S. Castañeda 
// for NAYLAMP MECHATRONICS - https://naylampmechatronics.com/
// Copyright 2016 License: GNU GPL v3 http://www.gnu.org/licenses/gpl.html
// Date: 05/09/2025
// ---------------------------------------------------------------------------


#define R_EN 4
#define L_EN 5
#define R_PWM 6
#define L_PWM 7

void setup() {
  pinMode(R_EN, OUTPUT);
  pinMode(L_EN, OUTPUT);
  pinMode(R_PWM, OUTPUT);
  pinMode(L_PWM, OUTPUT);

  Serial.begin(9600);
  Serial.println("BTS7960 Motor Driver Test");
}

void loop() {
  // Forward motion
  digitalWrite(R_EN, HIGH);
  digitalWrite(L_EN, HIGH);
  analogWrite(R_PWM, 150); // Set speed (0-255)
  analogWrite(L_PWM, 0);
  delay(2000);

  // Stop
  digitalWrite(R_EN, LOW);
  digitalWrite(L_EN, LOW);
  analogWrite(R_PWM, 0);
  analogWrite(L_PWM, 0);
  delay(1000);

  // Reverse motion
  digitalWrite(R_EN, HIGH);
  digitalWrite(L_EN, HIGH);
  analogWrite(R_PWM, 0);
  analogWrite(L_PWM, 150); // Set speed (0-255)
  delay(2000);

  // Stop
  digitalWrite(R_EN, LOW);
  digitalWrite(L_EN, LOW);
  analogWrite(R_PWM, 0);
  analogWrite(L_PWM, 0);
  delay(1000);
}
