//Autor:Alicia Rodriguez Urrieta//
//2) Hacer un programa en C++ que lea tres números y diga cuál es el mayor//

#include <iostream>
using namespace std;
int main(){

//Variables//
int num1, num2, num3;

//salidas y entradas//
cout<<"Hola, soy un programa que te indicara cual numero es el mayor.\n"<<"Ingrese un numero:";
cin>> num1;
cout<<"Ingrese el segundo numero numero:";
cin>> num2;
cout<<"Ingrese el tercer numero:";
cin>> num3;

//funcion//
if(num1>num2 && num1>num3){
	cout<<"El numero mayor es:"<<num1;
	
}
	
else if (num2>num1 && num2>num3){
	cout<<"El numero mayor es:"<<num2;
}

else if (num3>num1 && num3>num2){
	cout<<"El numero mayor es:"<<num3;
}

}









