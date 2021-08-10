#include <stdio.h>
#include <stdlib.h>
int main()
{
 int A,B,i,mult=1;
 printf("Ingrese dos numeros:\nNUMERO DE BASE: ");
 scanf("%d",&A);
 printf("NUMERO EXPONENTE: ");
 scanf("%d",&B);
for (i=0;i<B;i++)
{
if (B==0 && B==1)
{
 mult=1;
}
else
{
 mult=mult*A;
}
}
printf("\nLa potencia de %d, es: %d",A,mult);
 return 0;
}