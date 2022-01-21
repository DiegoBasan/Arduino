const int L1=13, L2=12, L3=11, L4=10, L5=9;
int  t =200;

void setup() {
  pinMode(L1, OUTPUT);
  pinMode(L2, OUTPUT);
  pinMode(L3, OUTPUT);
  pinMode(L4, OUTPUT);
  pinMode(L5, OUTPUT);

}

void loop() {
  digitalWrite(L1,1);
  delay(t);
  digitalWrite(L1,0);
  digitalWrite(L2,1);
  delay(t);
  digitalWrite(L2,0);
  digitalWrite(L3,1);
  delay(t);
  digitalWrite(L3,0);
  digitalWrite(L4,1);
  delay(t);
  digitalWrite(L4,0);
  digitalWrite(L5,1);
  delay(t);
  digitalWrite(L5,0);
}
