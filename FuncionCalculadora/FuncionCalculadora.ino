#include <SoftwareSerial.h>

String Tnum1, Tnum2;
int num1, num2;
int suma, resta, multiplicacion, division;
int flag = 1;
int flag2 = 1;

int funcion_suma(int a, int b){
  int sumaR = a + b;
  return sumaR;
}

int funcion_resta (int n1, int n2){
  int RestaR = n1 - n2;
  return RestaR;
}

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  //Serial.println("ingresa el primer numero");
}

void loop() {
  // put your main code here, to run repeatedly:
  
  while(flag == 1 && flag2 == 1){
    Serial.println("Ingresa el primer numero");
    flag = 0;
    delay(1000);
    break;
  }
  
  if(Serial.available()){
    Tnum1 = Serial.readString();
    Serial.println("Agrega el segundo numero");
    delay(2000);
    Tnum2 = Serial.readString();
    delay(500);
    num1 = Tnum1.toInt();
    num2 = Tnum2.toInt();
    delay(100);
    Serial.print("El primer numero es: ");
    Serial.println(num1);
    Serial.print("El segundo numero es: ");
    Serial.println(num2);
    suma = funcion_suma(num1,num2);
    Serial.print("El resultado de la suma es: ");
    Serial.println(suma);
    delay(10);
    resta = funcion_resta(num1,num2);
    Serial.print("El resultado de la resta es: ");
    Serial.println(resta);
    delay(10);
    //multiplicacion = funcion_mult(num1,num2);
    //division = funcion_div(num1,num2);
    flag = 1;
  }else{
    flag = 0;
  }
  delay(100);
}
