#include <stdio.h>
#include "Timer.h"
#include<LiquidCrystal.h>
int i=0,j=0,k=0;
LiquidCrystal Lcd(6,7,2,3,4,5);
Timer t;
void setup() {
  // Setup code here to run once:
  pinMode(4,OUTPUT);
  t.every(1000,takereading); 
  Lcd.begin(16,2);
}

void loop() {
  // Main code to run repeatedly:
t.update();
}

void takereading()
{
  Lcd.clear();
  k++;
   if((k>=60)&&(j<60))
   {       k=0;
       j++;

   }
   if((j>=60)&&(i<12))
   {
      k=0;
      j=0;
      i++;
   } 
   if(i>=12)
   {
    i=0;
    j=0;
    k=0;
   }
       Lcd.setCursor(1,1);
       Lcd.print(i);
       Lcd.setCursor(5,1);
       Lcd.print(j);
       Lcd.setCursor(8,1);
       Lcd.print(k);
   
}
