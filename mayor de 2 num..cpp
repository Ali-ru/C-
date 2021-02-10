//Autor:Alicia Rodriguez Urrieta//
//1) Hacer un programa en C++ que lea dos números y diga cuál es el mayor//

#include <iostream>
using namespace std;
int main(){
	
//Variables//
int num1, num2;

//salidas y entradas//
cout<<"Hola, soy un programa que te indicara cual numero es el mayor.\n" <<"Ingresa un numero:";
cin>> num1;
cout<<"Ingrese otro numero numero:";
cin>> num2;

//funcion//
if(num1<num2 ){
	cout<<"El numero mayor es:"<<num2;
	
}
	
else if (num2<num1){
	cout<<"El numero mayor es:"<<num1;
}
}
