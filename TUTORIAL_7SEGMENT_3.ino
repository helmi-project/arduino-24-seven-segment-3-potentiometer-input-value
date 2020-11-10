/*
   TUTORIAL SEVEN SEGMENT PADA ARDUINO
   MENGGUNAKAN CHIP TM1637
   MENAMPILKAN NILAI ANALOG POTENSIO

   Pinout :
   CLK -> D10
   DIO -> D11

   POTENSIO -> A0
*/

#include <Arduino.h>
#include <TM1637Display.h>

// Module connection pins (Digital Pins)
#define CLK 10
#define DIO 11
#define pinPotensio A0

#define TEST_DELAY 200

TM1637Display display(CLK, DIO);

void setup()
{
  pinMode(pinPotensio, INPUT);
  display.setBrightness(0x0f);
}

void loop()
{

  int nilaiPot = analogRead(pinPotensio);

  // Menampilkan angka potensio rata kanan
  display.showNumberDec(nilaiPot, false);
  delay(TEST_DELAY);


}
