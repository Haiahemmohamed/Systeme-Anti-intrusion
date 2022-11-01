# Arduino-security-system 
By raoufhaiahem@gmail.com

Arduino motion detector
Simple homemade Arduino based alarm system.it warning me when me door opens! It consists of:
  *Arduino Nano
  *Lcd i2c 16x2
  *Motion detectors
  *Piezo Buzzer
  *Red and Green LED


-------------------------------------------------
   Arduino-security-system by @Haiahemmohamed
-------------------------------------------------
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


