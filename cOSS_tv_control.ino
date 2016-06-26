#include <IRremote.h>
#include <IRremoteInt.h>

/* Roger Kou          */
/* kou818@gmail.com   */
/* 2016-06-26         */

IRsend irsend;

void setup() {
  Serial.begin(9600);
}

void loop() {
  
 Serial.print("Starting\n");

 irsend.sendSharp(0x68B92, 20);
 delay(100);
  
}

