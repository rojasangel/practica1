#include <stdio.h>
#include<stdlib.h>

int main()
{
	
    int edad, numeroDeSuerte;
    printf("Escribe tu edad: ");
    scanf("%d", &edad);
    printf("Escribe tu numero de la suerte: ");
    scanf("%d", &numeroDeSuerte);
    
    printf("Eres muy joven a tus apenas %d anos.\n",edad);
    printf("El %d es un numero suertudo.\n",numeroDeSuerte);
    
    return 0;
}


