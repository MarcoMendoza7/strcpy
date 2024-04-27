#include <stdio.h>
#include <string.h>

int main (){

    char palabraUno[10];
    char palabraDos[10];
    char arre[10];

    puts("Ingrese primera palabra");
    scanf("%s", &palabraUno);
    printf("%s \n", palabraUno);

    puts("Ingrese segunda palabra");
    scanf("%s", &palabraDos);
    printf("%s \n", palabraDos);

    strcpy(arre, palabraUno);
    strcpy(palabraDos, arre);
    printf("\nDespues\n");
    printf("Palabra 1: %s\n", palabraUno);
    printf("Palabra 2: %s\n", palabraDos);

    return 0;

}