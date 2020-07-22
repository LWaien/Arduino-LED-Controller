
#include <FastLED.h>

#define NUM_LEDS 24
#define LED_PIN 6
CRGB led[NUM_LEDS];

void setup() {
  FastLED.addLeds<NEOPIXEL, LED_PIN>(led, NUM_LEDS);

  for (int i = 0; i<NUM_LEDS; i++) {
    led[i] = CRGB(255,255,255);
  }
  FastLED.show();
}

void loop() {
  // put your main code here, to run repeatedly:

}
