#include <stdio.h>
void ordenarBurbuja(int *array, int tamanio) {
    int i,temp,cam=1;
    while (cam==1){
		cam=0;
    	for(i=0;i<tamanio-1;i++){
    		temp=*(array+i);
	    	if((array+i)>(array+1+i)){
				(array+i)=(array+1+i);
				*(array+1+i)=temp;
				cam=1;	
			}
		}
	}
    
}

int main() {
    int arr[] = {34, 12, 56, 78, 23};
    int *ptr;
    ptr=arr;
    int i;
    ordenarBurbuja(ptr, 5);
    for(i=0;i<5;i++){
    	printf("%i\n",*(ptr+i));
		}
    return 0;
}
