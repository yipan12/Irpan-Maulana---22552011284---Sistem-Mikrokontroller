#include <WiFi.h>
#include <HTTPClient.h>

#define BUTTON_PIN 4   // Tombol di GPIO4 (ESP 4)
#define LED_PIN 2      // LED di GPIO2 (ESP 2)

const char* ssid = "Wokwi-GUEST";
const char* password = "";
const char* apiKey = "DAV7JH4P73Y2DFTM";  // Write API Key

void setup() {
  pinMode(BUTTON_PIN, INPUT_PULLUP);
  pinMode(LED_PIN, OUTPUT);
  Serial.begin(115200);

  // Hubungkan ke WiFi
  WiFi.mode(WIFI_STA); 
  WiFi.begin(ssid, password);
  Serial.print("Menghubungkan ke WiFi");
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
    Serial.print("Status koneksi WiFi: ");
Serial.println(WiFi.status());
  }
  Serial.println("\nTerhubung ke WiFi!");
}

void loop() {
  int tombol = digitalRead(BUTTON_PIN);

  if (tombol == LOW) {
    Serial.println("💧 Kebocoran TERDETEKSI!");
    digitalWrite(LED_PIN, HIGH);
  } else {
    Serial.println("✅ Tidak ada kebocoran.");
    digitalWrite(LED_PIN, LOW);
  }

  // Kirim data ke ThingSpeak
  // Kirim data ke ThingSpeak
if (WiFi.status() == WL_CONNECTED) {
  HTTPClient http;
  int nilaiKirim = (tombol == LOW) ? 1 : 0; // 1 = bocor, 0 = tidak bocor
  String url = String("http://api.thingspeak.com/update?api_key=") + apiKey + "&field1=" + String(nilaiKirim);
  http.begin(url);
  int httpResponseCode = http.GET();
  Serial.print("HTTP Response code: ");
  Serial.println(httpResponseCode);
  http.end();
}


  delay(15000); // tunggu 15 detik (limit ThingSpeak)
}
