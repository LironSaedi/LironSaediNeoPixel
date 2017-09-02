#include <Adafruit_NeoPixel.h>

int delayv = 100;
int i = 0;
Adafruit_NeoPixel ring (12, 6);
void setup() {
  // put your setup code here, to run once:
  ring.begin();
  ring.setBrightness(20);
}

void loop()
{
  // put your main code here, to run repeatedly:
  if (i < 11)
  {
    delay(delayv);
    ring.setPixelColor(i, ring.Color(0, 255, 185));
    delay(delayv);
    ring.show();

    delay(delayv);
    ring.setPixelColor(i, ring.Color(0, 0, 0));
    delay(delayv);
    ring.setPixelColor(i, ring.Color(255, 0, 0));
    ring.show();

    delay(delayv);
    ring.setPixelColor(i, ring.Color(0, 0, 0));
    delay(delayv);
    ring.setPixelColor(i, ring.Color(0, 0, 255));
    ring.show();
  }
}

