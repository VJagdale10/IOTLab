const int trigPin = 2;
const int echoPin = 4;
const int buzzerPin = 9;


void setup() {
  pinMode(echoPin, INPUT);
  pinMode(trigPin, OUTPUT);
  pinMode(buzzerPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin,LOW);
  float duration = pulseIn(echoPin,HIGH);
  float cm = duration / 29 / 2;
  Serial.print("Disance in cm: ");
  Serial.println(cm);
  if(cm > 10){
    digitalWrite(buzzerPin,LOW);
  }else{
    digitalWrite(buzzerPin,HIGH);
  }
  delay(1000);
}
