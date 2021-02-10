//3)Hacer un programa en C++ que lea una letra y diga si es una vocal.//
//Autor: Alicia Rodríguez Urrieta//

#include <iostream>
using namespace std;
int main(){
	
//Variables//
char letra;

//entradaas y salidas//
cout<<"Hola, soy un programa que te indicara si la letra que ingresas es una vocal.\n"<<"Ingrese una letra:";
letra= cin.get();
	
//funcion//
if(letra=='a' || letra=='e' || letra=='i' || letra=='o' || letra=='u'){
	cout<<"Esta letra Si es una vocal";
}
else{
	cout<<"Esta letra NO es una vocal";
}
}
	

