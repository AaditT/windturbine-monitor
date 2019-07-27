int val;

void setup() {
  // put your setup code here, to run once:
  pinMode(12, OUTPUT);
  pinMode(3, INPUT);
}

void loop() {
  val = digitalRead (3) ;// read the values assigned to the digital interface 3 val
  if (val == HIGH) {
    analogWrite (12, 255);
  }
  else {
    analogWrite (12, 0);
  }
}
