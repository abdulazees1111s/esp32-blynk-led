#define BLYNK_TEMPLATE_ID "ENTER YOU BLYNK TEMPLET ID"
#define BLYNK_TEMPLATE_NAME "WOKWI 3 LED"
#define BLYNK_AUTH_TOKEN "ENTER YOUR AUTH TOKEN"

#define BLYNK_PRINT Serial

#include <WiFi.h>
#include <WiFiClient.h>
#include <BlynkSimpleEsp32.h>


char auth[] = BLYNK_AUTH_TOKEN;
char ssid[] = "Wokwi-GUEST";
char pass[] = "";

BlynkTimer timer;

#define LED1 13  
#define LED2 12  
#define LED3 14  
int SW_State_M = 0;
int SW_State_K = 0;
int SW_State_H = 0;

BLYNK_WRITE (V0)
{
  SW_State_M = param.asInt();
  if (SW_State_M == 1)
  {
    digitalWrite(LED1, HIGH);
    Serial.println("RED ON");
    Blynk.virtualWrite(V1, HIGH);
  }
  else
  {
    digitalWrite(LED1, LOW);
    Serial.println("RED OFF");
    Blynk.virtualWrite(V1, LOW);
  }
}

BLYNK_WRITE (V2)
{
  SW_State_K = param.asInt();
  if (SW_State_K == 1)
  {
    digitalWrite(LED2, HIGH);
    Serial.println("YELLOW ON");
    Blynk.virtualWrite(V3, HIGH);
  }
  else
  {
    digitalWrite(LED2, LOW);
    Serial.println("YELLOW OFF");
    Blynk.virtualWrite(V3, LOW);
  }
}

BLYNK_WRITE (V4)
{
  SW_State_H = param.asInt();
  if (SW_State_H == 1)
  {
    digitalWrite(LED3, HIGH);
    Serial.println("GREEN ON");
    Blynk.virtualWrite(V5, HIGH);
  }
  else
  {
    digitalWrite(LED3, LOW);
    Serial.println("GREEN OFF");
    Blynk.virtualWrite(V5, LOW);
  }
}

void setup()
{
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  Serial.begin(9600);
  Blynk.begin(auth, ssid, pass);
}

void loop()
{
  Blynk.run();
  timer.run();
}