/*2. Hacer un array unidimensional que acepte ocho números enteros. Luego le
pregunte al usuario que ingrese un número a buscar, implementar una función que
busque ese número, si lo encuentra, debe retornar un valor de verdaderos, en caso
contrario, retornar falso.*/
/*Apellidos y Nombres: Zhong Callasi, Linghai Joaquin*/
#include <iostream>
using namespace std;
bool EstaEnLaLista(int num, int lista[], int tam){
	for (int i=0;i<tam;i++){
		if (lista[i]==num){
			return true;
		}
	}
	return false;
}
int main(int argc, char *argv[]) {
	int lista[8]={12,23,131,2,1,5,7,8};
	int num;
	bool VF;
	cout<<"Ingrese un número: ";
	cin>>num;
	cout<<endl;
	VF=EstaEnLaLista(num,lista,8);
	cout<<"¿Está el número "<<num<<" en la lista? "<<boolalpha<<VF; /*Para mostrar si es verdadero o falso que se encuentra en la lista*/
	return 0;
}

