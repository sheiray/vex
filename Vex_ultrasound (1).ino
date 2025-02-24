const int trigPin = 9;
const int echoPin = 10;
const int led = 8;

void setup() {
  Serial.begin(9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);

}

void loop() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  long duration = pulseIn(echoPin, HIGH);
  long distance = duration * 0.034 / 2;
  
  if (distance <=60)
    digitalWrite(led, HIGH);
    else
    digitalWrite(led, LOW);

  Serial.print(distance);
  Serial.println(" cm");
    delay(50);
}
