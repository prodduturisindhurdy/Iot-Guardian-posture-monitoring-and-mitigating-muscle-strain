#include <Adafruit_MPU6050.h>
#include <Adafruit_Sensor.h>
#include <Wire.h>

#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16, 2);
#include <ESP8266WiFi.h>
#include "ThingSpeak.h"

#include <stdio.h>
#include <string.h>

Adafruit_MPU6050 mpu;

int st = D5;
int vib = D6;

int buz = D7;

const char* ssid     = "project6446"; // Your ssid
const char* password = "123456789"; // Your Password
int keyIndex = 0;            // your network key Index number (needed only for WEP)
WiFiClient  client;

String myStatus = "";

unsigned long myChannelNumber = 2462932;
const char * myWriteAPIKey = "JP1MPTMPK6WW2544";

    
String number1="+917993797003";

void setup(void) {
  Serial.begin(115200);
  //while (!Serial)
  lcd.init();
  lcd.backlight();
  lcd.setCursor(0, 0);
  lcd.print("Welcome To ");
  lcd.setCursor(0, 1);
  lcd.print("The Project");
  delay(2000);
  
    WiFi.begin(ssid, password);
      
  pinMode(vib,OUTPUT);
  pinMode(st,OUTPUT);
  pinMode(buz,OUTPUT);
    
  digitalWrite(buz,1);
  digitalWrite(vib,1);
  delay(700);
  digitalWrite(vib,0);
  digitalWrite(buz,0);
  delay(700);    
  digitalWrite(vib,1);
  delay(700);
  digitalWrite(vib,0); 
  
  ThingSpeak.begin(client);  // Initialize ThingSpeak
}

int tcount = 0;

void loop() {

  /* Get new sensor events with the readings */
  sensors_event_t a, g, temp;
  mpu.getEvent(&a, &g, &temp);


  float ax = abs(a.acceleration.x);
  float ay = abs(a.acceleration.y);
  float az = abs(a.acceleration.z);
 

  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("X::");
  lcd.print(ax);
  lcd.print(" Y:");
  lcd.print(ay);
  lcd.setCursor(0, 1);
  lcd.print("Z: ");
  lcd.print(az);
  delay(1000);
  
  int i = 0;
  if((ax > 2) || (ay > 2))
  {    
    
    digitalWrite(vib,1);  
      
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("Abnormal Posture");
  
    while(i < 100)
    {  
        digitalWrite(st,1);
        delay(10);  
        digitalWrite(st,0);
        delay(10);  
        i++;
    }
    
  }
  else
  {    
    digitalWrite(vib,0);
  }
  
  if((ax > 8) || (ay > 8))
  {    

    
      digitalWrite(buz,1);
                  
      Serial.println("AT+CMGF=1");
      delay(700);
      Serial.print("AT+CMGS=");
      Serial.print("\"");
      Serial.print(number1);
      Serial.println("\"");
      delay(700);
      Serial.println("*** Fall Alert ***");
      delay(2500);
      Serial.write(26);  
      digitalWrite(buz,0);
      
  }
  tcount++;
  if(tcount > 25)
  {
    tcount = 0;
    
    ThingSpeak.setField(1, ax);
    ThingSpeak.setField(2, ay);
    ThingSpeak.setField(3, az);

    ThingSpeak.setStatus(myStatus);
    
updating channel. HTTP error code " + String(x));
    }
  }
    
  delay(500);
}
