#include <stdio.h>
#include <math.h>

int main(){
float p1,p2,p3,media;
printf("Introduzca el precio en establecimiento 1, en euros:\n");
scanf("%f",&p1);
printf("Introduzca el precio en establecimiento 2, en euros:\n");
scanf("%f",&p2);
printf("Introduzca el precio en establecimiento 3, en euros:\n");
scanf("%f",&p3);
media = (p1+p2+p3)/3;
printf("El precio medio del producto es %f",media);
return 0;
}
