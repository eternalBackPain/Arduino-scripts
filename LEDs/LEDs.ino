// Making a SOS using morse code

int redLED = 13;
int quickMorse = 250;
int slowMorse = 700;

void letterS()
{
    digitalWrite(redLED, HIGH);
    delay(quickMorse);
    digitalWrite(redLED, LOW);
    delay(quickMorse);

    digitalWrite(redLED, HIGH);
    delay(quickMorse);
    digitalWrite(redLED, LOW);
    delay(quickMorse);

    digitalWrite(redLED, HIGH);
    delay(quickMorse);
    digitalWrite(redLED, LOW);
    delay(quickMorse);
}

void letterO()
{
    digitalWrite(redLED, HIGH);
    delay(slowMorse);
    digitalWrite(redLED, LOW);
    delay(slowMorse);

    digitalWrite(redLED, HIGH);
    delay(slowMorse);
    digitalWrite(redLED, LOW);
    delay(slowMorse);

    digitalWrite(redLED, HIGH);
    delay(slowMorse);
    digitalWrite(redLED, LOW);
    delay(slowMorse);
}

void setup()
{
	pinMode(redLED, OUTPUT); 
}

void loop()
{
    letterS();
    letterO();
    letterS();
    delay(2000);
}
