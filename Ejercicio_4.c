#include <stdio.h>
#include <stdlib.h>
int main()
{
int i,num,fac=1;
printf("Ingrese un numero: ");
scanf("%d",&num);
for (i=1;i<=num;i++)
{
fac=fac*i;
}
printf("\nEl factorial de %d, es: %d\n",num,fac);
 return 0;
}