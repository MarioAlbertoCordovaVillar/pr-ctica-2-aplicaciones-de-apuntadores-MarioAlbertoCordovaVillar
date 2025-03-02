#include <stdio.h>

int *buscarElemento(int *arr, int tamanio, int valor) {
    int i;
    for(i=0;i<tamanio-1;i++){
    	if(valor==*(arr+i)){
    		return (arr+i);
		}
	}
    return NULL;
}

int main(void) {
    int arr[] = {10, 20, 30, 40, 50};
    int Num,res;
    printf("Escribe el numero el cual deseas que sea buscado en el arreglo\n");
    scanf("%i",&Num);
    res=buscarElemento(arr,5 , Num);
    if(res==NULL){
    	printf("No se hallo ninguna coincidencia en el arreglo con tu numero pedido\n");
	}
	else{
		printf("La direccion de memoria del numero buscado (%i), esta en la pocision %x",Num,res);
	}
    return 0;
}
