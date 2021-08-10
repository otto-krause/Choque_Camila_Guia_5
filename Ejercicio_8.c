#include <stdio.h>
#include <stdlib.h>
int main()
{
 int limite=10, positivo=0,nulos=0,negativos=0;
 int numero,c;
printf("Ingrese %d numeros\n",limite);
 for(c=1;c<=limite;c++)
 {
 scanf("%d",&numero);
 if (numero<0)
 {
 negativos++;
 }
 else
 {
 if(numero==0)
 {
 nulos++;
 }
 else
 {
 if(numero>0)
 {
 positivo++;
 }
}
 }
 }
printf("\nHay:\n%d numeros negativos\n%d numero positivos\n%d numeros igual a cero",negativos,positivo,nulos);
return 0;
}