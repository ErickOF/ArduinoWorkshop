// Pins
int PIN_R = 13;
int PIN_G = 11;
int PIN_B = 12;

// This method only run one time
void setup()
{
  pinMode(PIN_R, OUTPUT);
  pinMode(PIN_G, OUTPUT);
  pinMode(PIN_B, OUTPUT);
}

void blink_rgb(int r, int g, int b) {
  digitalWrite(PIN_R, r);
  digitalWrite(PIN_G, g);
  digitalWrite(PIN_B, b);
}

// This method run in a loop
void loop()
{
  blink_rgb(0, 0, 1);
  delay(1000); // Wait for 1000 millisecond(s)
  blink_rgb(0, 1, 0);
  delay(1000);
  blink_rgb(0, 1, 1);
  delay(1000);
  blink_rgb(1, 0, 0);
  delay(1000);
  blink_rgb(1, 0, 1);
  delay(1000);
  blink_rgb(1, 1, 0);
  delay(1000);
  blink_rgb(1, 1, 1);
  delay(1000);
}
