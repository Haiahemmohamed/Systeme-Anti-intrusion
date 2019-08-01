/*
/*************************************************************
Arduino-security-system by @Haiahemmohamed
*************************************************************/

  +---------------------------------------->Motion<-----------------------------------------+
  |                             +----------------------------+                              |
  |                             |                            |                              |
  |                             |                            |                              |
  |                       +-----v-----+                +-----v----+                         |
  |                       |   Yes     |                |    No    |---------+               |
  |                       +---+-------+                +-------+--+         |               |
  |                           |                                             |               |
  |                           |                                             |               |
  |                      +----v----+                                    +---v---+           |
  |         +------------+  Alarm  +-----+                          +---| Safe  |--+        |
  |         |            +----v----+     |                          |   +-------+  |        |
  |         |                 |          |                          |              |        |
  |    +----v-----+       +---v---+    +-v-+                      +-v-+      +-----v-----+  |
  |    | REDlight |       | Tone  |    |LCD|                      |LCD|      |Greenlight |  |
  |    +----------+       +---+---+    +-+-+                      +-+-+      +-----+-----+  |
  |                                      |                          |                       |
  |                                  +---v---+                   +--v--+                    |
  |                                  |CHAMBRE|                   | All |                    | 
  |                                  |  num  |                   |SAFE |                    | 
  |                                  +-------+                   +--+--+                    |
  |       +----+                         |                          |                       | 
  +-------+Exit|<------------------------+                          +-----------------------> 
          +----+  
          
---------------------------------------------------------------------------------------------
Module/components      |  PIN  |   
RED   LED              |  D7   |
GREEN LED              |  D9   |
MOTION DETECTER 1      |  D2   |
MOTION DETECTER 2      |  D3   |
LCD I2C                |       |
Speaker                |  1    |
---------------------------------------------------------------------------------------------
*/

//Include the LCD library
#include <Wire.h> 
#include <LiquidCrystal_I2C.h>
  LiquidCrystal_I2C lcd(0x27,20,4);

// LED PIN
#define RED 7
#define GREEN 9

// Moition detecter PIN
#define PIR1 2
#define PIR2 3
  int motion1 = 0;
  int motion2 = 0;

// Speaker
#define tone (1)
  int spkr = (1); 

void setup()
  {
      pinMode(RED,OUTPUT);
      pinMode(GREEN,OUTPUT);
      pinMode(PIR1, INPUT);
      pinMode(PIR2, INPUT);

      lcd.begin(16, 2);
        lcd.setCursor(2,0);
        lcd.print("Good Morning");//Wlecome Message will appear in the beginning. 
        delay(200);    
  }

void loop()
  {
    // digitalWrite(LED), digitalRead(PIR);
    int motion1 = digitalRead(PIR1);
    int motion2 = digitalRead(PIR2);

    // initialize the lcd
    lcd.init();

    if (motion1 == HIGH)
      {
        // lcd message will appear in this condition (motion1 == HIGH)
        lcd.backlight();
        lcd.setCursor(4,0);
        lcd.print("CHAMBRE1");
        lcd.setCursor(3,1);
        lcd.print("Mouvement!");
        delay(1000);
        
        // LED
        digitalWrite(RED, HIGH);           
        digitalWrite(GREEN, LOW);
        delay(1000);
        digitalWrite(RED, LOW);
        
        // Speaker
        tone(pin,300,delay 1000);

      }

    else if (motion2 == HIGH)
      {
        // lcd message will appear in this condition (motion2 == HIGH)
        lcd.backlight();
        lcd.setCursor(4,0);
        lcd.print("CHAMBRE2");
        lcd.setCursor(3,1);
        lcd.print("Mouvement!");
        delay(1000);
        
        // LED
        digitalWrite(RED, HIGH);
        digitalWrite(GREEN, LOW);
        delay(1000);
        digitalWrite(RED, LOW);
        
        // Speaker
        tone(pin,300,delay 1000);

      }

    else
      {
        //lcd message will appear in this condition (no moition)
        lcd.backlight();
        lcd.setCursor(4,0);
        lcd.print("ALL SAFE");
        //LED
        digitalWrite(RED, LOW);
        digitalWrite(GREEN, HIGH);
      }
  }
