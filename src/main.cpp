#include <Arduino.h>
#include <ESP8266WiFi.h>
#include <ESP8266HTTPClient.h>
#include <Adafruit_NeoPixel.h>

#define PIN 2

HTTPClient sender;
WiFiClient wifiClient;

const char* ssid = "yourssid";
const char* password =  "yourpassword";
String url = "your UHRSERVer url";

Adafruit_NeoPixel strip = Adafruit_NeoPixel(60, PIN, NEO_GRB + NEO_KHZ800);

void displayone(uint32_t c, uint8_t position) {
  Serial.print("displayone: ");
  if (position == 1) {
    strip.setPixelColor(4, c);
    strip.setPixelColor(5, c);
    strip.setPixelColor(6, c);
    strip.setPixelColor(7, c);
  } else if (position == 2) {
    strip.setPixelColor(18, c);
    strip.setPixelColor(19, c);
    strip.setPixelColor(20, c);
    strip.setPixelColor(21, c);
  } else if (position == 3) {
    strip.setPixelColor(34, c);
    strip.setPixelColor(35, c);
    strip.setPixelColor(36, c);
    strip.setPixelColor(37, c);
  } else if (position == 4) {
    strip.setPixelColor(48, c);
    strip.setPixelColor(49, c);
    strip.setPixelColor(50, c);
    strip.setPixelColor(51, c);
  }
  strip.show();
}
  
void displaytwo(uint32_t c, uint8_t position) {
  Serial.print("displaytwo");
  if (position == 1) {
    strip.setPixelColor(0, c);
    strip.setPixelColor(1, c);
    strip.setPixelColor(2, c);
    strip.setPixelColor(3, c);
    strip.setPixelColor(6, c);
    strip.setPixelColor(7, c);
    strip.setPixelColor(8, c);
    strip.setPixelColor(9, c);
    strip.setPixelColor(12, c);
    strip.setPixelColor(13, c);
  } else if (position == 2) {
    strip.setPixelColor(14, c);
    strip.setPixelColor(15, c);
    strip.setPixelColor(16, c);
    strip.setPixelColor(17, c);
    strip.setPixelColor(20, c);
    strip.setPixelColor(21, c);
    strip.setPixelColor(22, c);
    strip.setPixelColor(23, c);
    strip.setPixelColor(26, c);
    strip.setPixelColor(27, c);
  } else if (position == 3) {
    strip.setPixelColor(30, c);
    strip.setPixelColor(31, c);
    strip.setPixelColor(32, c);
    strip.setPixelColor(33, c);
    strip.setPixelColor(36, c);
    strip.setPixelColor(37, c);
    strip.setPixelColor(38, c);
    strip.setPixelColor(39, c);
    strip.setPixelColor(42, c);
    strip.setPixelColor(43, c);
  } else if (position == 4) {
    strip.setPixelColor(44, c);
    strip.setPixelColor(45, c);
    strip.setPixelColor(46, c);
    strip.setPixelColor(47, c);
    strip.setPixelColor(50, c);
    strip.setPixelColor(51, c);
    strip.setPixelColor(52, c);
    strip.setPixelColor(53, c);
    strip.setPixelColor(56, c);
    strip.setPixelColor(57, c);
  }
  strip.show();
}

void displaythree(uint32_t c, uint8_t position) {
  Serial.println("displaythree");
  if (position == 1) {
    strip.setPixelColor(2, c);
    strip.setPixelColor(3, c);
    strip.setPixelColor(4, c);
    strip.setPixelColor(5, c);
    strip.setPixelColor(6, c);
    strip.setPixelColor(7, c);
    strip.setPixelColor(8, c);
    strip.setPixelColor(9, c);
    strip.setPixelColor(12, c);
    strip.setPixelColor(13, c);
  } else if (position == 2) {
    strip.setPixelColor(16, c);
    strip.setPixelColor(17, c);
    strip.setPixelColor(18, c);
    strip.setPixelColor(19, c);
    strip.setPixelColor(20, c);
    strip.setPixelColor(21, c);
    strip.setPixelColor(22, c);
    strip.setPixelColor(23, c);
    strip.setPixelColor(26, c);
    strip.setPixelColor(27, c);
  } else if (position == 3) {
    strip.setPixelColor(32, c);
    strip.setPixelColor(33, c);
    strip.setPixelColor(34, c);
    strip.setPixelColor(35, c);
    strip.setPixelColor(36, c);
    strip.setPixelColor(37, c);
    strip.setPixelColor(38, c);
    strip.setPixelColor(39, c);
    strip.setPixelColor(42, c);
    strip.setPixelColor(43, c);
  } else if (position == 4) {
    strip.setPixelColor(46, c);
    strip.setPixelColor(47, c);
    strip.setPixelColor(48, c);
    strip.setPixelColor(49, c);
    strip.setPixelColor(50, c);
    strip.setPixelColor(51, c);
    strip.setPixelColor(52, c);
    strip.setPixelColor(53, c);
    strip.setPixelColor(56, c);
    strip.setPixelColor(57, c);
  }
  strip.show();
}

void displayfour(uint32_t c, uint8_t position) {
  Serial.println("displayfour");
  if (position == 1) {
    strip.setPixelColor(4, c);
    strip.setPixelColor(5, c);
    strip.setPixelColor(6, c);
    strip.setPixelColor(7, c);
    strip.setPixelColor(10, c);
    strip.setPixelColor(11, c);
    strip.setPixelColor(12, c);
    strip.setPixelColor(13, c);
  } else if (position == 2) {
    strip.setPixelColor(18, c);
    strip.setPixelColor(19, c);
    strip.setPixelColor(20, c);
    strip.setPixelColor(21, c);
    strip.setPixelColor(24, c);
    strip.setPixelColor(25, c);
    strip.setPixelColor(26, c);
    strip.setPixelColor(27, c);
  } else if (position == 3) {
    strip.setPixelColor(34, c);
    strip.setPixelColor(35, c);
    strip.setPixelColor(36, c);
    strip.setPixelColor(37, c);
    strip.setPixelColor(40, c);
    strip.setPixelColor(41, c);
    strip.setPixelColor(42, c);
    strip.setPixelColor(43, c);
  } else if (position == 4) {
    strip.setPixelColor(48, c);
    strip.setPixelColor(49, c);
    strip.setPixelColor(50, c);
    strip.setPixelColor(51, c);
    strip.setPixelColor(54, c);
    strip.setPixelColor(55, c);
    strip.setPixelColor(56, c);
    strip.setPixelColor(57, c);
  }
  strip.show();
}

void displayfive(uint32_t c, uint8_t position) {
  Serial.println("displayfive");
  if (position == 1) {
    strip.setPixelColor(2, c);
    strip.setPixelColor(3, c);
    strip.setPixelColor(4, c);
    strip.setPixelColor(5, c);
    strip.setPixelColor(8, c);
    strip.setPixelColor(9, c);
    strip.setPixelColor(10, c);
    strip.setPixelColor(11, c);
    strip.setPixelColor(12, c);
    strip.setPixelColor(13, c);
  } else if (position == 2) {
    strip.setPixelColor(16, c);
    strip.setPixelColor(17, c);
    strip.setPixelColor(18, c);
    strip.setPixelColor(19, c);
    strip.setPixelColor(22, c);
    strip.setPixelColor(23, c);
    strip.setPixelColor(24, c);
    strip.setPixelColor(25, c);
    strip.setPixelColor(26, c);
    strip.setPixelColor(27, c);
  } else if (position == 3) {
    strip.setPixelColor(32, c);
    strip.setPixelColor(33, c);
    strip.setPixelColor(34, c);
    strip.setPixelColor(35, c);
    strip.setPixelColor(38, c);
    strip.setPixelColor(39, c);
    strip.setPixelColor(40, c);
    strip.setPixelColor(41, c);
    strip.setPixelColor(42, c);
    strip.setPixelColor(43, c);
  } else if (position == 4) {
    strip.setPixelColor(46, c);
    strip.setPixelColor(47, c);
    strip.setPixelColor(48, c);
    strip.setPixelColor(49, c);
    strip.setPixelColor(52, c);
    strip.setPixelColor(53, c);
    strip.setPixelColor(54, c);
    strip.setPixelColor(55, c);
    strip.setPixelColor(56, c);
    strip.setPixelColor(57, c);
  }
  strip.show();
}

void displaysix(uint32_t c, uint8_t position) {
  Serial.println("six");
  if (position == 1) {
    strip.setPixelColor(0, c);
    strip.setPixelColor(1, c);
    strip.setPixelColor(2, c);
    strip.setPixelColor(3, c);
    strip.setPixelColor(4, c);
    strip.setPixelColor(5, c);
    strip.setPixelColor(8, c);
    strip.setPixelColor(9, c);
    strip.setPixelColor(10, c);
    strip.setPixelColor(11, c);
    strip.setPixelColor(12, c);
    strip.setPixelColor(13, c);
  } else if (position == 2) {
    strip.setPixelColor(14, c);
    strip.setPixelColor(15, c);
    strip.setPixelColor(16, c);
    strip.setPixelColor(17, c);
    strip.setPixelColor(18, c);
    strip.setPixelColor(19, c);
    strip.setPixelColor(22, c);
    strip.setPixelColor(23, c);
    strip.setPixelColor(24, c);
    strip.setPixelColor(25, c);
    strip.setPixelColor(26, c);
    strip.setPixelColor(27, c);
  } else if (position == 3) {
    strip.setPixelColor(30, c);
    strip.setPixelColor(31, c);
    strip.setPixelColor(32, c);
    strip.setPixelColor(33, c);
    strip.setPixelColor(34, c);
    strip.setPixelColor(35, c);
    strip.setPixelColor(38, c);
    strip.setPixelColor(39, c);
    strip.setPixelColor(40, c);
    strip.setPixelColor(41, c);
    strip.setPixelColor(42, c);
    strip.setPixelColor(43, c);
  } else if (position == 4) {
    strip.setPixelColor(44, c);
    strip.setPixelColor(45, c);
    strip.setPixelColor(46, c);
    strip.setPixelColor(47, c);
    strip.setPixelColor(48, c);
    strip.setPixelColor(49, c);
    strip.setPixelColor(52, c);
    strip.setPixelColor(53, c);
    strip.setPixelColor(54, c);
    strip.setPixelColor(55, c);
    strip.setPixelColor(56, c);
    strip.setPixelColor(57, c);
  }
  strip.show();
}

void displayseven(uint32_t c, uint8_t position) {
  Serial.println("displayseven");
  if (position == 1) {
    strip.setPixelColor(4, c);
    strip.setPixelColor(5, c);
    strip.setPixelColor(6, c);
    strip.setPixelColor(7, c);
    strip.setPixelColor(8, c);
    strip.setPixelColor(9, c);
  } else if (position == 2) {
    strip.setPixelColor(18, c);
    strip.setPixelColor(19, c);
    strip.setPixelColor(20, c);
    strip.setPixelColor(21, c);
    strip.setPixelColor(22, c);
    strip.setPixelColor(23, c);
  } else if (position == 3) {
    strip.setPixelColor(34, c);
    strip.setPixelColor(35, c);
    strip.setPixelColor(36, c);
    strip.setPixelColor(37, c);
    strip.setPixelColor(38, c);
    strip.setPixelColor(39, c);
  } else if (position == 4) {
    strip.setPixelColor(48, c);
    strip.setPixelColor(49, c);
    strip.setPixelColor(50, c);
    strip.setPixelColor(51, c);
    strip.setPixelColor(52, c);
    strip.setPixelColor(53, c);
  }
  strip.show();
}

void displayeight(uint32_t c, uint8_t position) {
  Serial.println("displayeight");
  if (position == 1) {
    strip.setPixelColor(0, c);
    strip.setPixelColor(1, c);
    strip.setPixelColor(2, c);
    strip.setPixelColor(3, c);
    strip.setPixelColor(4, c);
    strip.setPixelColor(5, c);
    strip.setPixelColor(6, c);
    strip.setPixelColor(7, c);
    strip.setPixelColor(8, c);
    strip.setPixelColor(9, c);
    strip.setPixelColor(10, c);
    strip.setPixelColor(11, c);
    strip.setPixelColor(12, c);
    strip.setPixelColor(13, c);
  } else if (position == 2) {
    strip.setPixelColor(14, c);
    strip.setPixelColor(15, c);
    strip.setPixelColor(16, c);
    strip.setPixelColor(17, c);
    strip.setPixelColor(18, c);
    strip.setPixelColor(19, c);
    strip.setPixelColor(20, c);
    strip.setPixelColor(21, c);
    strip.setPixelColor(22, c);
    strip.setPixelColor(23, c);
    strip.setPixelColor(24, c);
    strip.setPixelColor(25, c);
    strip.setPixelColor(26, c);
    strip.setPixelColor(27, c);
  } else if (position == 3) {
    strip.setPixelColor(30, c);
    strip.setPixelColor(31, c);
    strip.setPixelColor(32, c);
    strip.setPixelColor(33, c);
    strip.setPixelColor(34, c);
    strip.setPixelColor(35, c);
    strip.setPixelColor(36, c);
    strip.setPixelColor(37, c);
    strip.setPixelColor(38, c);
    strip.setPixelColor(39, c);
    strip.setPixelColor(40, c);
    strip.setPixelColor(41, c);
    strip.setPixelColor(42, c);
    strip.setPixelColor(43, c);
  } else if (position == 4) {
    strip.setPixelColor(44, c);
    strip.setPixelColor(45, c);
    strip.setPixelColor(46, c);
    strip.setPixelColor(47, c);
    strip.setPixelColor(48, c);
    strip.setPixelColor(49, c);
    strip.setPixelColor(50, c);
    strip.setPixelColor(51, c);
    strip.setPixelColor(52, c);
    strip.setPixelColor(53, c);
    strip.setPixelColor(54, c);
    strip.setPixelColor(55, c);
    strip.setPixelColor(56, c);
    strip.setPixelColor(57, c);
  }
  strip.show();
}

void displaynine(uint32_t c, uint8_t position) {
  Serial.println("nine");
  if (position == 1) {
    strip.setPixelColor(2, c);
    strip.setPixelColor(3, c);
    strip.setPixelColor(4, c);
    strip.setPixelColor(5, c);
    strip.setPixelColor(6, c);
    strip.setPixelColor(7, c);
    strip.setPixelColor(8, c);
    strip.setPixelColor(9, c);
    strip.setPixelColor(10, c);
    strip.setPixelColor(11, c);
    strip.setPixelColor(12, c);
    strip.setPixelColor(13, c);
  } else if (position == 2) {
    strip.setPixelColor(16, c);
    strip.setPixelColor(17, c);
    strip.setPixelColor(18, c);
    strip.setPixelColor(19, c);
    strip.setPixelColor(20, c);
    strip.setPixelColor(21, c);
    strip.setPixelColor(22, c);
    strip.setPixelColor(23, c);
    strip.setPixelColor(24, c);
    strip.setPixelColor(25, c);
    strip.setPixelColor(26, c);
    strip.setPixelColor(27, c);
  } else if (position == 3) {
    strip.setPixelColor(32, c);
    strip.setPixelColor(33, c);
    strip.setPixelColor(34, c);
    strip.setPixelColor(35, c);
    strip.setPixelColor(36, c);
    strip.setPixelColor(37, c);
    strip.setPixelColor(38, c);
    strip.setPixelColor(39, c);
    strip.setPixelColor(40, c);
    strip.setPixelColor(41, c);
    strip.setPixelColor(42, c);
    strip.setPixelColor(43, c);
  } else if (position == 4) {
    strip.setPixelColor(46, c);
    strip.setPixelColor(47, c);
    strip.setPixelColor(48, c);
    strip.setPixelColor(49, c);
    strip.setPixelColor(50, c);
    strip.setPixelColor(51, c);
    strip.setPixelColor(52, c);
    strip.setPixelColor(53, c);
    strip.setPixelColor(54, c);
    strip.setPixelColor(55, c);
    strip.setPixelColor(56, c);
    strip.setPixelColor(57, c);
  }
  strip.show();
}

void displayzero(uint32_t c, uint8_t position) {
  Serial.println("displayzero");
  if (position == 1) {
    strip.setPixelColor(0, c);
    strip.setPixelColor(1, c);
    strip.setPixelColor(2, c);
    strip.setPixelColor(3, c);
    strip.setPixelColor(4, c);
    strip.setPixelColor(5, c);
    strip.setPixelColor(6, c);
    strip.setPixelColor(7, c);
    strip.setPixelColor(8, c);
    strip.setPixelColor(9, c);
    strip.setPixelColor(10, c);
    strip.setPixelColor(11, c);
  } else if (position == 2) {
    strip.setPixelColor(14, c);
    strip.setPixelColor(15, c);
    strip.setPixelColor(16, c);
    strip.setPixelColor(17, c);
    strip.setPixelColor(18, c);
    strip.setPixelColor(19, c);
    strip.setPixelColor(20, c);
    strip.setPixelColor(21, c);
    strip.setPixelColor(22, c);
    strip.setPixelColor(23, c);
    strip.setPixelColor(24, c);
    strip.setPixelColor(25, c);
  } else if (position == 3) {
    strip.setPixelColor(30, c);
    strip.setPixelColor(31, c);
    strip.setPixelColor(32, c);
    strip.setPixelColor(33, c);
    strip.setPixelColor(34, c);
    strip.setPixelColor(35, c);
    strip.setPixelColor(36, c);
    strip.setPixelColor(37, c);
    strip.setPixelColor(38, c);
    strip.setPixelColor(39, c);
    strip.setPixelColor(40, c);
    strip.setPixelColor(41, c);
  } else if (position == 4) {
    strip.setPixelColor(44, c);
    strip.setPixelColor(45, c);
    strip.setPixelColor(46, c);
    strip.setPixelColor(47, c);
    strip.setPixelColor(48, c);
    strip.setPixelColor(49, c);
    strip.setPixelColor(50, c);
    strip.setPixelColor(51, c);
    strip.setPixelColor(52, c);
    strip.setPixelColor(53, c);
    strip.setPixelColor(54, c);
    strip.setPixelColor(55, c);
  }
  strip.show();
}

void displaypoints(uint32_t c) {
  strip.setPixelColor(28, c);
  strip.setPixelColor(29, c);
  strip.show();
}  

void runner() {
  if (sender.begin(wifiClient, url)) {
    int httpCode = sender.GET();
    if (httpCode > 0) {
      if (httpCode == HTTP_CODE_OK) {
        String payload = sender.getString();
        Serial.println(payload);
        int counter2 = 0;
        strip.clear();
        strip.show();
        for(int i = 0; i < payload.length(); i++) {
          counter2++;
          Serial.println(payload.charAt(i));
          Serial.println(counter2);
          if(payload.charAt(i) == '0') {
            displayzero(strip.Color(random(0, 255), random(0, 255), random(0, 255)), counter2);
          } else if (payload.charAt(i) == '1') {
            displayone(strip.Color(random(0, 255), random(0, 255), random(0, 255)), counter2);
          } else if (payload.charAt(i) == '2') {
            displaytwo(strip.Color(random(0, 255), random(0, 255), random(0, 255)), counter2);
          } else if (payload.charAt(i) == '3') {
            displaythree(strip.Color(random(0, 255), random(0, 255), random(0, 255)), counter2);
          } else if (payload.charAt(i) == '4') {
            displayfour(strip.Color(random(0, 255), random(0, 255), random(0, 255)), counter2);
          } else if (payload.charAt(i) == '5') {
            displayfive(strip.Color(random(0, 255), random(0, 255), random(0, 255)), counter2);
          } else if (payload.charAt(i) == '6') {
            displaysix(strip.Color(random(0, 255), random(0, 255), random(0, 255)), counter2);
          } else if (payload.charAt(i) == '7') {
            displayseven(strip.Color(random(0, 255), random(0, 255), random(0, 255)), counter2);
          } else if (payload.charAt(i) == '8') {
            displayeight(strip.Color(random(0, 255), random(0, 255), random(0, 255)), counter2);
          } else if (payload.charAt(i) == '9') {
            displaynine(strip.Color(random(0, 255), random(0, 255), random(0, 255)), counter2);
          } else if (payload.charAt(i) == ':') {
            counter2 = counter2 -1;
            displaypoints(strip.Color(random(0, 255), random(0, 255), random(0, 255)));
          }    
  }  
        
      }
      
    }else{
      Serial.printf("HTTP-Error");
    }

    // Wenn alles abgeschlossen ist, wird die Verbindung wieder beendet
    sender.end();
    
  }else {
    Serial.printf("HTTP-Verbindung konnte nicht hergestellt werden!");
  }
  
}


void setup() {
  Serial.begin(9600);
  Serial.println("Setup!");
  Serial.println("connect to WiFi network");

  WiFi.begin(ssid, password);

  while (WiFi.status() != WL_CONNECTED) {
    delay(200);
    Serial.print(".");
  }

  Serial.println("Verbunden!");
  strip.begin();
  strip.show(); 
  strip.setBrightness(255);
  strip.rainbow(1, 1);
  strip.show();
}

void loop() {
  Serial.println("loop!");
  runner();
  delay(30000);
}
