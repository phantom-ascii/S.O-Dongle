#include <Arduino.h>
#include <Wire.h>
#include <SSD1306Ascii.h>
#include <SSD1306AsciiWire.h>

SSD1306AsciiWire oled;

void setup() {
  // Start USB CDC Serial
  USBSerial.begin(115200);

  // Initialize I2C OLED (Default CH552 I2C pins)
  Wire.begin();
  oled.begin(&Adafruit128x64, 0x3C);
  oled.setFont(Adafruit5x7);
  
  oled.clear();
  oled.println("  UBUNTU STATS");
  oled.println("  Waiting for PC...");
}

void loop() {
  if (USBSerial.available() > 0) {
    // Read incoming string until newline
    String data = USBSerial.readStringUntil('\n');
    
    // Parse CSV values (CPU, RAM, GPU)
    int firstComma = data.indexOf(',');
    int secondComma = data.indexOf(',', firstComma + 1);

    if (firstComma != -1 && secondComma != -1) {
      String cpuStr = data.substring(0, firstComma);
      String ramStr = data.substring(firstComma + 1, secondComma);
      String gpuStr = data.substring(secondComma + 1);

      // Render onto OLED Display
      oled.clear();
      oled.set2X();
      
      oled.print("CPU: ");
      oled.print(cpuStr);
      oled.println("%");

      oled.print("RAM: ");
      oled.print(ramStr);
      oled.println("%");

      oled.print("GPU: ");
      oled.print(gpuStr);
      oled.println("%");
    }
  }
}