#include <stdio.h>
#include <string>
#include <iostream>
using namespace std;

int main(){
int edad = 21;
long distancia = 488321;
char letra = 'k';

printf("%i %d %c \n\n\n", edad, distancia, letra);

edad = 22;
distancia = 666543;
letra = 't';
printf("%i %d %c\n\n\n",edad, distancia, letra);

char nombre[10];
char ciudad[10];
puts("Cual es su nombre?");
gets(nombre);
puts("De que ciudad eres?");
gets(ciudad);
puts("Bienvenido");   puts(nombre);   puts(", encantado de hablar con alguien de");   puts(ciudad);

}