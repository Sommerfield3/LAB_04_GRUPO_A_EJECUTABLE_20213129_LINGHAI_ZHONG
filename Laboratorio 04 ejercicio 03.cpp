/*3. Hacer un array 5x3 que acepte números enteros ingresados por el usuario. Al final,
debe mostrar la suma de todos los números que estén en una fila par.*/
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int numeros[5][3];
	int suma;
	for (int i=0;i<5;i++){
		for (int j=0;j<3;j++){
			cout<<"Ingrese un número: ";
			cin>>numeros[i][j];
		}
	}
	suma=0;
	for (int i=0;i<5;i++){
		if ((i%2)==1){/*Ya que comenzamos el conteo de filas en 0, las filas pares son las impares en la lista (ejemplo: fila 1 en total es la fila 0 en la lista).*/
			for (int j=0;j<3;j++){
				suma+=numeros[i][j];
			}
		}
	}
	cout<<"La suma de los números en las filas pares es: "<<suma;
	
	return 0;
}

