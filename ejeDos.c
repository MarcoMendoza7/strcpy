//ESCRIBE UN RPOGRAMA QUE RECIBA POR TECLADO 2 PALABRAS 

#include <stdio.h>
#include <string.h>

int main (){
    int len;
    int i;

    char origen[]="brisas";
    char destino[100]="para";

    len = strlen(destino);
    for(i = 0; i < len; i++){
        strcat(destino, origen);
    }
    printf("Palabra1: %s", destino);
    printf("\n");
    return 0;
}