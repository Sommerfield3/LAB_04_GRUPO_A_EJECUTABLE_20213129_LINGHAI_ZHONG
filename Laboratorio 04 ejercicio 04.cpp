/*4. Implementar un programa que rellene un array con los números primos
comprendidos entre 1 y 100 y los muestre en pantalla en orden descendente.*/
/*Apellidos y Nombres: Zhong Callasi, Linghai Joaquin*/
#include <iostream>
using namespace std;
int ContarPrimos(int x, int y){
	int contador=0;
	for (int i=(x+1);i<y;i++){
		int z=0;
		for (int j=1;j<=i;j++){
			if (i%j==0){
				z++;
			}
		}
		if (z==2){
			contador++;
		}
	}
	return contador;
}
void Primos(int x, int y, int *lista){
	int q=0;
	for (int i=(x+1);i<y;i++){
		int z=0;
		for (int j=1;j<=i;j++){
			if (i%j==0){
				z++;
			}
		}
		if (z==2){
			lista[q]=i;
			q++;
		}
	}
}
int main(int argc, char *argv[]) {
	int max=100;
	int cont=ContarPrimos(1,max);
	int *lista=new int[cont];
	Primos(1,max,lista);
	cout<<"La lista de números primos es: ";
	for (int i=(cont-1);i>=0;i--){
		if (i==0){
			cout<<lista[i];
		}
		else{
			cout<<lista[i]<<", ";
		}
	}
	return 0;
}
