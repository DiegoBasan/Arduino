const int a=13, b=12, c=11, d=10, e=9, f=8, g=7;
const int Boton=2;
int B,N;
int t=500;
void setup(){
  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(e, OUTPUT);
  pinMode(f, OUTPUT);
  pinMode(g, OUTPUT);
  pinMode(Boton, INPUT);

}
void six(){
  digitalWrite(a,1);
  digitalWrite(b,0);
  digitalWrite(c,1);
  digitalWrite(d,1);
  digitalWrite(e,1);
  digitalWrite(f,1);
  digitalWrite(g,1);
}
void cin(){
  digitalWrite(a,1);
  digitalWrite(b,0);
  digitalWrite(c,1);
  digitalWrite(d,1);
  digitalWrite(e,0);
  digitalWrite(f,1);
  digitalWrite(g,1);
}
void cua(){
  digitalWrite(a,0);
  digitalWrite(b,1);
  digitalWrite(c,1);
  digitalWrite(d,0);
  digitalWrite(e,0);
  digitalWrite(f,1);
  digitalWrite(g,1);
}
void tre(){
  digitalWrite(a,1);
  digitalWrite(b,1);
  digitalWrite(c,1);
  digitalWrite(d,1);
  digitalWrite(e,0);
  digitalWrite(f,0);
  digitalWrite(g,1);
}
void dos(){
  digitalWrite(a,1);
  digitalWrite(b,1);
  digitalWrite(c,0);
  digitalWrite(d,1);
  digitalWrite(e,1);
  digitalWrite(f,0);
  digitalWrite(g,1);
}
void uno(){
  digitalWrite(a,0);
  digitalWrite(b,1);
  digitalWrite(c,1);
  digitalWrite(d,0);
  digitalWrite(e,0);
  digitalWrite(f,0);
  digitalWrite(g,0);
}
void cero(){
  digitalWrite(a,1);
  digitalWrite(b,1);
  digitalWrite(c,1);
  digitalWrite(d,1);
  digitalWrite(e,1);
  digitalWrite(f,1);
  digitalWrite(g,0);
}
void loop(){
/*
B=digitalRead(Boton);
if(R!=0) n=random(1,7);

  switch(n){
    case 1:uno();
           break;
    case 2:dos();
           break;
    case 3:tre();
           break;
    case 4:cua();
           break;
    case 5:cin();
           break;
    case 6:sei();
           break;
  }
  delay(10);
*/
B=digitalRead(Boton);
if(B!=0) N=random(1,7);
Serial.println("s"+B);
if(N==1)uno();
else if (N==2)dos();
    else if (N==3)tre();
        else if (N==4)cua();
            else if (N==5)cin();
                else if (N==6)six();

}

  