int startValue = 5;      // Number of countdown steps
int ledPin = 13;         // Built-in LED on most Arduino boards

void flashLED(int times) {
    // Blink the LED 'times' number of times
    for (int i = 0; i < times; i++) {
        digitalWrite(ledPin, HIGH);
        delay(200);
        digitalWrite(ledPin, LOW);
        delay(200);
    }
}

void setup() {
    pinMode(ledPin, OUTPUT);   // Set LED pin as output
    Serial.begin(9600);        // Start serial communication

    Serial.println("=== Smart Countdown Starting ===");

    int count = startValue;
    while (count > 0) {
        Serial.print("Count: ");
        Serial.println(count);

        flashLED(count);       // Blink LED 'count' times

        delay(1000);           // Wait 1 second before next step
        count = count - 1;
    }

    Serial.println("=== Countdown Complete ===");
}

void loop() {
    // Nothing needed here for this program
}