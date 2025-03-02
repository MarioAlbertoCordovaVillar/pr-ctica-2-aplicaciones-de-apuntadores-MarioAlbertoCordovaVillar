#include <stdio.h>

int main() {
	int i;
    int arr[5] = {10, 20, 30, 40, 50};
    	for(i=0;i<5;i++){
			printf("La direccion de memoria de la posicion (%d) es:%x\n",i,&arr[i]);
	}
    return 0;
}
