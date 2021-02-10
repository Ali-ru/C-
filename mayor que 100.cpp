//5)Hacer un programa en C++ Que pida un número y diga si es mayor de 100.//
//Autor: Alicia Rodríguez Urrieta//

#include <iostream>
using namespace std;
int main(){
	
//variables//
int num;

//entradas y salidas//
cout<<"Hola, soy un programa que te indicara si el numero que ingresas es mayor a 100.\n"<<"Ingrese un numero:";
cin>> num;
	
//funciones//
if(num<=100){
	cout<<"El numero NO es mayor que 100";
}

else if(num>=99){
	cout<<"El numero SI es mayor que 100";

}	
}
