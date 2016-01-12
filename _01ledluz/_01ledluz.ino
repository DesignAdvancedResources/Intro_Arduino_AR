int ledPin = 13;
int sensLuz = A0;

int luz = 0;



void setup() {
  pinMode(ledPin, OUTPUT);
  digitalWrite (ledPin, LOW);
  Serial.begin(9600);
}

void loop() {

  luz = analogRead(sensLuz);
  Serial.println(luz);

  if (luz < 80) {

    digitalWrite (ledPin, HIGH);

  }

  else {
    digitalWrite (ledPin, LOW);

  }
 delay(10);

}
