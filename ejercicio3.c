#include<stdio.h>
int main(){
	
	int l,a,h,v;
	
	printf("cual es el largo=");
	scanf("%d",&l);
	printf("cual es el ancho=");
	scanf("%d",&a);
	printf("cual es el altura=");
	scanf("%d",&h);
	
	v=l*a*h;
	printf("El volumen es= %d",v);
	
	return 0;
}
