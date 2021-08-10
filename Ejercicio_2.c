#include <stdio.h>
#include <stdlib.h>
int main()
{
 int limite = 15;
 int numero=0,c=0;
 int mayor = 0;
 float sum = 0;
 printf("Ingrese %d numeros:\n", limite);
 for (c=0;c<=limite-1;c++)
 {
 scanf("%d",&numero);
 sum = sum + numero;
if(c==0)
 {
 mayor=numero;
 }
 else
 {
 if (numero>mayor)
 {
 mayor=numero;
 }
 }
 }
 printf("El mayor es: %d\n", mayor);
 printf("La suma es: %.0f\n",sum);
 printf("El promedio de los numeros ingresados es: %.2f\n\n", sum/limite);
 return 0;
}