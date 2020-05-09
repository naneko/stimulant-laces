const int piezoOnePin = A0;
const int piezoTwoPin = A1;
const int piezoThreePin = A2;

int piezoOne = 0;
int piezoTwo = 0;
int piezoThree = 0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  piezoOne = analogRead(piezoOnePin);
  piezoTwo = analogRead(piezoTwoPin);
  piezoThree = analogRead(piezoThreePin);

  Serial.print("/p1 "); Serial.println(piezoOne);
  Serial.print("/p2 "); Serial.println(piezoTwo);
  Serial.print("/p3 "); Serial.println(piezoThree);
}
