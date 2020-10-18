#include<LiquidCrystal.h>
LiquidCrystal lcd(13,12,11,10,9,8);
int ledr=0;
int ledy=1;
int ledb=2;
int ledg=3;
int motor = 4;
int btn1 = A1;
int btn2 = 5;
int btn3 = 6;
int btn4 = 7;
void setup()
{
  pinMode(ledr, OUTPUT);
  pinMode(ledy, OUTPUT);
  pinMode(ledb, OUTPUT);
  pinMode(ledg, OUTPUT);
  pinMode(motor,OUTPUT);
  pinMode(btn1 , INPUT);
  pinMode(btn2 , INPUT);
  pinMode(btn3 , INPUT);
  pinMode(btn4 , INPUT);
  lcd.begin(16,2); 
}

void loop()
{
    digitalWrite(ledr, LOW);
    digitalWrite(ledy, LOW);
    digitalWrite(ledb, LOW);
    digitalWrite(ledg, LOW);
    digitalWrite(motor ,HIGH);
    

  
  int btn1_press = digitalRead(btn1);
  int btn2_press = digitalRead(btn2);
  int btn3_press = digitalRead(btn3);
  int btn4_press = digitalRead(btn4);
  
   if (btn1_press == HIGH){
  
     digitalWrite(motor , LOW);
     digitalWrite(ledr, HIGH);
     lcd.setCursor(0,0);
     lcd.print("Water level is   ");
     lcd.setCursor(0,1);
     lcd.print("at 25%           ");
    delay(1000);
    } 
  
   else if (btn2_press == LOW){
  
     digitalWrite(motor ,LOW);
     digitalWrite(ledr, HIGH);
     digitalWrite(ledy, HIGH);
     lcd.setCursor(0,0);
     lcd.print("Water level is   ");
     lcd.setCursor(0,1);
     lcd.print("at 50%           ");
     delay(1000);
    } 
   else if (btn3_press == LOW){
  
     digitalWrite(motor ,LOW);
     digitalWrite(ledr, HIGH);
     digitalWrite(ledy, HIGH);
     digitalWrite(ledb, HIGH);
     lcd.setCursor(0,0);
     lcd.print("Water level is   ");
     lcd.setCursor(0,1);
     lcd.print("at 75%           ");
     delay(1000);
    } 
   else if (btn4_press == LOW){
  
     digitalWrite(motor ,HIGH);
     digitalWrite(ledr, HIGH);
     digitalWrite(ledy, HIGH);
     digitalWrite(ledb, HIGH);
     digitalWrite(ledg, HIGH);
     lcd.setCursor(0,0);
     lcd.print("Water level is   ");
     lcd.setCursor(0,1);
     lcd.print("at 100%          ");
     delay(1000);
    } 
    

  
     lcd.setCursor(0,0);
     lcd.print("                 ");
     lcd.setCursor(0,1);
     lcd.print("                 ");
     delay(1000);
}
