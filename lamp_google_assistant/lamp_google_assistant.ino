#define BLYNK_PRINT Serial

#include <ESP8266WiFi.h> // file untuk wifi 
#include <BlynkSimpleEsp8266.h> // file untuk blynk

char auth[] = "Nxu2KnuyajwInWDNarIzoDrAPwbrvdFk";
char ssid[] = "A50s";
char pass[] = "Hadez321";

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600); // fungsi utama, di jalakan sekali

  Blynk.begin(auth, ssid, pass); // menjalankan blynk sesuai token, wifi, dan paswwordnya 

}

void loop() {
  // put your main code here, to run repeatedly:
  Blynk.run();

}
