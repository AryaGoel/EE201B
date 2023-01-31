void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(4, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(6, LOW); // A
  digitalWrite(4, LOW); // G
  digitalWrite(7, LOW); // B
  digitalWrite(5, LOW); // F
  digitalWrite(13, LOW); // C
  digitalWrite(12, LOW); // D
  digitalWrite(11, HIGH); // E
  delay(1500); // Delay of 1.5 seconds

  digitalWrite(6, LOW); // A
  digitalWrite(4, LOW); // G
  digitalWrite(7, LOW); // B
  digitalWrite(5, LOW); // F
  digitalWrite(13, LOW); // C
  digitalWrite(12, LOW); // D
  digitalWrite(11, LOW); // E
  delay(1500); // Delay of 1.5 seconds

  digitalWrite(6, LOW); // A
  digitalWrite(4, HIGH); // G
  digitalWrite(7, LOW); // B
  digitalWrite(5, HIGH); // F
  digitalWrite(13, LOW); // C
  digitalWrite(12, HIGH); // D
  digitalWrite(11, HIGH); // E
  delay(1500); // Delay of 1.5 seconds

  digitalWrite(6, LOW); // A
  digitalWrite(4, LOW); // G
  digitalWrite(7, HIGH); // B
  digitalWrite(5, LOW); // F
  digitalWrite(13, LOW); // C
  digitalWrite(12, LOW); // D
  digitalWrite(11, LOW); // E
  delay(1500); // Delay of 1.5 seconds

  digitalWrite(6, LOW); // A
  digitalWrite(4, LOW); // G
  digitalWrite(7, HIGH); // B
  digitalWrite(5, LOW); // F
  digitalWrite(13, LOW); // C
  digitalWrite(12, LOW); // D
  digitalWrite(11, HIGH); // E
  delay(1500); // Delay of 1.5 seconds

  digitalWrite(6, HIGH); // A
  digitalWrite(4, LOW); // G
  digitalWrite(7, LOW); // B
  digitalWrite(5, LOW); // F
  digitalWrite(13, LOW); // C
  digitalWrite(12, HIGH); // D
  digitalWrite(11, HIGH); // E
  delay(1500); // Delay of 1.5 seconds

  digitalWrite(6, LOW); // A
  digitalWrite(4, LOW); // G
  digitalWrite(7, LOW); // B
  digitalWrite(5, HIGH); // F
  digitalWrite(13, LOW); // C
  digitalWrite(12, LOW); // D
  digitalWrite(11, HIGH); // E
  delay(1500); // Delay of 1.5 seconds

  digitalWrite(6, LOW); // A
  digitalWrite(4, LOW); // G
  digitalWrite(7, LOW); // B
  digitalWrite(5, HIGH); // F
  digitalWrite(13, HIGH); // C
  digitalWrite(12, LOW); // D
  digitalWrite(11, LOW); // E
  delay(1500); // Delay of 1.5 seconds

  digitalWrite(6, HIGH); // A
  digitalWrite(4, HIGH); // G
  digitalWrite(7, LOW); // B
  digitalWrite(5, HIGH); // F
  digitalWrite(13, LOW); // C
  digitalWrite(12, HIGH); // D
  digitalWrite(11, HIGH); // E
  delay(1500); // Delay of 1.5 seconds

  digitalWrite(6, LOW); // A
  digitalWrite(4, HIGH); // G
  digitalWrite(7, LOW); // B
  digitalWrite(5, LOW); // F
  digitalWrite(13, LOW); // C
  digitalWrite(12, LOW); // D
  digitalWrite(11, LOW); // E
  delay(1500); // Delay of 1.5 seconds
}
