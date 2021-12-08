int signalPin = 16;

void setup() {
    Serial.begin(115200);
    delay(2000);
    Serial.println("Lelay Module Test");
    pinMode(signalPin, OUTPUT);
}

void loop() {
    Serial.println("On");
    digitalWrite(signalPin, HIGH); 
    delay(1000); 
    Serial.println("Off");
    digitalWrite(signalPin, LOW); 
    delay(1000); 
}
