#include <stdio.h>

int main()
{
    int tem,c;
    
    printf("ingrese la temperatura==");
    scanf("%d",&tem);
    printf("\n");
    c=(tem-32)* 5/9;
    printf("la temperatura es de %d *c",c);
    
    
    return 0;
}


