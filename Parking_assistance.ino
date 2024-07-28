const int trigPin = 9;    
const int echoPin = 10;   
const int greenLED = 5;   
const int yellowLED = 6;  
const int redLED = 7;     
const int buzzerPin = 8;

const int safeDistance = 100;
const int cautionDistance = 50;
const int dangerDistance = 20;

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(greenLED, OUTPUT);
  pinMode(yellowLED, OUTPUT);
  pinMode(redLED, OUTPUT);
  pinMode(buzzerPin, OUTPUT);
  
  Serial.begin(9600);
}

void loop() {
  long duration, distance;
  
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  

  duration = pulseIn(echoPin, HIGH);
  

  distance = (duration / 2) / 29.1;
  

  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");
 
  if (distance > safeDistance) {
    digitalWrite(greenLED, HIGH);
    digitalWrite(yellowLED, LOW);
    digitalWrite(redLED, LOW);
    noTone(buzzerPin);
  } else if (distance > cautionDistance) {
    digitalWrite(greenLED, LOW);
    digitalWrite(yellowLED, HIGH);
    digitalWrite(redLED, LOW);
    tone(buzzerPin, 1000, 100);  // Short beep
  } else if (distance > dangerDistance) {
    digitalWrite(greenLED, LOW);
    digitalWrite(yellowLED, LOW);
    digitalWrite(redLED, HIGH);
    tone(buzzerPin, 2000, 100);  // Higher pitch, short beep
  } else {
    digitalWrite(greenLED, LOW);
    digitalWrite(yellowLED, LOW);
    digitalWrite(redLED, HIGH);
    tone(buzzerPin, 3000);  // Continuous high-pitch tone
  }
  
  delay(100);  
}
