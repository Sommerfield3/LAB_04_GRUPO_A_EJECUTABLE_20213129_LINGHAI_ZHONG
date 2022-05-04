/*1. Escribir un programa donde se pueda ingresar los datos de tres personas, como el
nombre, apellido, edad y DNI y luego lo muestre por pantalla.*/
/*Apellidos y Nombres: Zhong Callasi, Linghai Joaquin*/
#include <iostream>
using namespace std;
int main(int argc, char *argv[]) {
	string Nombres[3];
	string Apellidos[3];
	string Edad[3];
	string DNI[3];
	for (int i=0;i<3;i++){
		int a=i+1;
		cout<<"Ingrese el nombre de la persona "<<a<<": ";
		getline(cin,Nombres[i]);
		cout<<"Ingrese el apellido de la persona "<<a<<": ";
		getline(cin,Apellidos[i]);
		cout<<"Ingrese la edad de la persona "<<a<<": ";
		getline(cin,Edad[i]);
		cout<<"Ingrese el número de DNI de la persona "<<a<<": ";
		getline(cin,DNI[i]);
		cout<<endl;
	}
	for (int i=0;i<3;i++){
		int a=i+1;
		cout<<"Los datos de la persona "<<a<<" son: "<<endl;
		cout<<"Nombre: "<<Nombres[i]<<endl;
		cout<<"Apellido: "<<Apellidos[i]<<endl;
		cout<<"Edad: "<<Edad[i]<<endl;
		cout<<"DNI: "<<DNI[i]<<endl;
		cout<<endl;
	}
	delete [] Nombres;
	delete [] Apellidos;
	delete [] Edad;
	delete [] DNI;
	return 0;
}

