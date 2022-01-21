const int led1 = 13;
const int led2 = 12;
const int led4 = 11;
const int led3 = 10;
const int led5 = 9;
const int led6 = 8;
void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);
}

void ON(){
  digitalWrite(led1, HIGH); // HIGH = 1
  delay(100);
  digitalWrite(led1, LOW); // LOW = 0
  delay(1000);
  }
void OFF(){
  digitalWrite(led2, HIGH); // HIGH = 1
  delay(100);
  digitalWrite(led2, LOW); // LOW = 0
  delay(1000);
  }

void loop() {
  ON();
  OFF();
}
