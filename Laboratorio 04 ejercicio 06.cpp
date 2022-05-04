/*6. Escribe un programa que pida nueve números enteros y los almacene en una matriz
3x3. Calcula la suma de los números de cada fila y mostrar por pantalla el número de
fila con mayor suma.*/
/*Apellidos y Nombres: Zhong Callasi, Linghai Joaquin*/
#include <iostream>
using namespace std;
void comparar(int sumas[]){
	int fila,max;
	max=sumas[0];
	fila=0;
	for (int i=1;i<3;i++){
		if (sumas[i]>max){
			max=sumas[i];
			fila=i;
		}
	}
	cout<<"La fila "<<fila+1<<" tiene la mayor suma de entre las filas, su suma es "<<max<<".";
}
int main(int argc, char *argv[]) {
	int numeros[3][3];
	int sumas[3];
	int n=3;
	for (int i=0;i<n;i++){/*Ingresando números*/
		for (int j=0;j<n;j++){
			cout<<"Ingrese un número: ";
			cin>>numeros[i][j];
		}
	}
	for (int i=0;i<n;i++){
		int suma;
		suma=0;
		for (int j=0;j<n;j++){
			suma+=numeros[i][j];
		}
		sumas[i]=suma;
	}
	comparar(sumas);
	return 0;
}

