#include <stdio.h>
#include <stdlib.h>
int main ()
{
 int c,A,B,inicio;
 printf("Ingrese dos numeros:\n");
 scanf("%d",&A);
 scanf("%d",&B);
 printf("\nLos numeros intermedios de los numeros ingresados son:");
 inicio = A+1;
 for (c=inicio;c<B;c++)
 {
 printf("%d ",c);
 }
 return 0;
}