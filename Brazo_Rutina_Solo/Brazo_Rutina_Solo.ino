#include <Servo.h>
Servo servomotor;
int pos = 0;
Servo servo1; 
Servo servo2; 
Servo servo3;  
Servo servo4;  
Servo servo5;  
Servo servo6;  

void setup(){
  servo6.attach(5, 500, 2500);  //ANTE 666
  servo5.attach(6, 500, 2500);  //BRAZO 5
  servo4.attach(7, 500, 2500);  //BASE 4
  servo3.attach(8, 500, 2500);  //GARRA 3
  servo2.attach(9, 500, 2500);  //MANO ARRIBA 2
  servo1.attach(10, 500, 2500); //MUÑECA NO MUEVE
}

void loop(){
  servo1.write(1);
  delay(15);
  servo2.write(100);// 2
  delay(15);
  servo3.write(80); // 3
  delay(15);
  servo4.write(50); // 4
  delay(15);
  servo5.write(150);
  delay(15);
  servo6.write(140);// 6
  delay(15);

  delay(1500);
  /*
  servo4.write(180);
  delay(15);
  servo6.write(130);
  delay(15);
  servo5.write(1);
  delay(3000);*/
  servo4.write(10);
  delay(1000);
  servo4.write(70);
  delay(1000);
  servo5.write(140);
  delay(15);
  servo2.write(150);
  delay(1000);
  servo2.write(100);
  delay(1000);
  servo2.write(70);
  delay(150);
  servo3.write(20);
  delay(150);
   servo3.write(50);
  delay(150);
   servo3.write(20);
  delay(150);
     servo3.write(50);
  delay(150);
     servo3.write(20);
  delay(150);
     servo3.write(50);
  delay(1500);
  
}
