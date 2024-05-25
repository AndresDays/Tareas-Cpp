#include <stdio.h>
#include <conio.h>

int main ()
{
float pg, l, tg,ga;
printf("Cantidad de leche que se produce: \n");
scanf("%f",&l);
tg= 1/3.785;
printf("Precio por cada gal%cn: \n",162);
scanf("%f",&pg);
ga = tg*pg;
printf("La ganancia por la entrega de leche es %f \n\n",ga);
getch();
return 0;
}
