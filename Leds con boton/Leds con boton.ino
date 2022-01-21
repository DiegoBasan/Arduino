const int vel=11, pot=A0, cd1=13, cd2=12;
const int btn1=5, btn2=4;
int pwm=0, der=0, izq=0;
void setup(){
  pinMode(cd1, OUTPUT);
  pinMode(cd2, OUTPUT);
  pinMode(btn1, INPUT);
  pinMode(btn2, INPUT);
  Serial.begin(9600);
}
void derecha(){
  digitalWrite(cd1,1);
  digitalWrite(cd2,0);
}
void izquierda(){
  digitalWrite(cd1,0);
  digitalWrite(cd2,1);
}
void paro(){
  digitalWrite(cd1,0);
  digitalWrite(cd2,0);
}
void loop(){
  pwm=analogRead(pot);
  pwm=map(pwm, 0, 1023, 0, 255);
  analogWrite(vel, 50);
  der=digitalRead(btn1);
  izq=digitalRead(btn2);
  if(der==1 && izq==0)derecha();
  if(der==0 && izq==1)izquierda();
  if(der==0 && izq==0)paro();
  delay(10);
  
}