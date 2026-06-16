#include <Adafruit_NeoPixel.h>

#define PIN 2          // GPIO2 = D4 on NodeMCU
#define NUMPIXELS 25

Adafruit_NeoPixel pixels(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

// 5x5 serpentine matrix mapping, starting from top-left corner
int XY(int x, int y) {
  if (y % 2 == 0) {
    return y * 5 + x;
  } else {
    return y * 5 + (4 - x);
  }
}

// Gradually fade all LEDs
void fadeAll() {
  for (int i = 0; i < NUMPIXELS; i++) {

    uint32_t c = pixels.getPixelColor(i);

    uint8_t g = (c >> 8) & 0xFF;

    g = (uint8_t)(g * 0.80);

    pixels.setPixelColor(i, pixels.Color(0, g, 0));
  }
}

// Create a new random green pixel
void dropRandom() {

  int x = random(0, 5);
  int y = random(0, 5);

  pixels.setPixelColor(
    XY(x, y),
    pixels.Color(0, random(180, 255), 0)
  );
}

void setup() {

  pixels.begin();
  pixels.clear();
  pixels.show();

  // Initialize random seed
  randomSeed(analogRead(A0));
}

void loop() {

  // Fade previous pixels
  fadeAll();

  // Add a new random pixel
  dropRandom();

  // Update LED matrix
  pixels.show();

  // Control animation speed
  delay(65);
}
