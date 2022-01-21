#include <SoftwareSerial.h> //Librería para usar otros pines como Serial
SoftwareSerial BT1(4,2); //Harán de RX Y TX, respectivamente. También se cruzan.
char val; //Declaramos una variable para almacenar un caracter
int led = 13; //Declaramos al pin dentro de una variable llamada led
void setup() {
  BT1.begin(9600); //Lo que sería seríal se reemplaza con BT1
  pinMode(led, OUTPUT); //Declaramos al pin 13 como salida
}

void loop() {

  //Declaramos un if para ver los datos almacenados en BT1
  if (BT1.available()) {
    val = BT1.read(); //Se lee la información
    //Declaramos la condiciones. La app envía un caracter distinto
    //depeniendo del botón que presiones y se alamcena en la variable val.
    if ( val == '0' )
    {
      digitalWrite(led, LOW); //Si presionas Off enviará un 0. 
                              //Por lo que pondrá el pin en LOW.
    }

    if ( val == '1' )
    {
      digitalWrite(led, HIGH); //Si presionas On enviará un 1. 
                               //Por lo que pondrá el pin en HIGH.
    }
  }

}
