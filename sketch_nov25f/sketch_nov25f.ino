//AGARRA Y MUEVE
#include <Servo.h>
Servo servomotor;
Servo PINZA; 
Servo GIRA; 
Servo NM;  
Servo BRAZO;  
Servo ANTE;  
Servo BASE;  

void setup(){
  BASE.attach(5, 500, 2500);    // BASE 5
  ANTE.attach(6, 500, 2500);    // ANTE 6
  BRAZO.attach(7, 500, 2500);   // BRAZO 7
  NM.attach(8, 500, 2500);      // NO MOVER 8
  GIRA.attach(9, 500, 2500);    // GIRA 9
  PINZA.attach(10, 500, 2500);  // PINZA 10
}

void INICIO(){
    NM.write(1);
    delay(15);
    BASE.write(45); //1-180 --80
    delay(15);
    ANTE.write(60);// 40-180 --160 ---120
    delay(15);
    BRAZO.write(10);//10-180 --180 ---110
    delay(15);
    GIRA.write(10);//10-150 -- 90
    delay(15);
    PINZA.write(100);//100-40 --100
    delay(1500);
}
void AGARRE(){
    BASE.write(90); 
    delay(150);
     ANTE.write(130); 
    delay(800);
    PINZA.write(40);
    delay(500);    
    ANTE.write(60); 
    delay(500);
    BASE.write(10);
    delay(500);
    ANTE.write(120); 
    delay(1000);
    PINZA.write(110);
    delay(500);    
    ANTE.write(60); 
    delay(500);
}
void OTRO(){
    BASE.write(10); 
    GIRA.write(100); 
    BRAZO.write(50);//10-180 --180 ---110
    delay(15);
    delay(500);
    BASE.write(180); 
    delay(40);
    GIRA.write(1);
    delay(1500);
    BRAZO.write(10);//10-180 --180 ---110
    delay(15);
}
void SI(){
  BASE.write(45); 
  delay(900);
  GIRA.write(80);
  delay(150);
  GIRA.write(10);
  delay(150);
  GIRA.write(80);
  delay(150);
  GIRA.write(10);
  delay(150);
  GIRA.write(80);
  delay(150);
  GIRA.write(10);
  delay(150);
}
void NO(){
  BASE.write(45); 
  delay(1000);
  BASE.write(10); 
  delay(200);
  BASE.write(180); 
  delay(250);
  BASE.write(10); 
  delay(200);
  BASE.write(180); 
  delay(250);
  BASE.write(10); 
  delay(200);
  BASE.write(180); 
  delay(250);
}
void loop(){
    NO();

    
}

//void salude()´
