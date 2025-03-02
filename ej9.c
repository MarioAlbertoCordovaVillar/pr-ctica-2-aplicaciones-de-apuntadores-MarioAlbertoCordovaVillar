#include <stdio.h>

int sumaArreglo(int *arr, int tamanio) {
    int i,suma=0;
	for(i=0;i<tamanio;i++){
		suma+=*(arr+i);
	}
    return suma;
}

int main() {
	int res;
	int ptr;
    int numeros[] = {1, 2, 3, 4, 5};
    ptr=numeros;
    res=sumaArreglo(ptr,5 );
    printf("El resultado de la suma es:%i",res);
    return 0;
}
