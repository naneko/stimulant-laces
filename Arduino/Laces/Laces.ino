const int piezoOnePin = A0;
const int threshold = 100;

int piezoOne = 0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  piezoOne = analogRead(piezoOnePin);

  Serial.print("/p1 "); Serial.println(piezoOne);
}
