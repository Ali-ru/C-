//4)Hacer un programa en C++ Que pida un número del 1 al 7 y diga el día de la semana correspondiente//
//Autor: Alicia Rodríguez Urrieta//

#include <iostream>
using namespace std;
int main(){
	
//variables//
int num;

//entradas y salidas//
cout<<"Hola soy un programa que te indicara a que dia de la semana corresponde el numero que ingreses, iniciando con lunes.\n"<<"Introduce un numero:";
cin>> num;	

//Funcion//
if(num==1){
	cout<<"El dia es lunes";
}

else if(num==2){
	cout<<"El dia es martes";
}

else if(num==3){
	cout<<"El dia es miercoles";
}

else if(num==4){
	cout<<"El dia es jueves";
}

else if(num==5){
	cout<<"El dia es viernes";
}

else if(num==6){
	cout<<"El dia es sabaddo";
}

else if(num==7){
	cout<<"El dia es domingo";
}
else{
	cout<<"Numero incorrecto, intentalo de nuevo";
}

}

