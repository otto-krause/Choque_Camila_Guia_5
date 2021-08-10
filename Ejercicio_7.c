#include <stdio.h>
#include <stdlib.h>
int main()
{
 int i,personas=20,dia=15,c,sum,sum1=0,mayor=0,indice;
 int cant[dia];
 int ventas[personas];
 printf("Ingrese la cantidad vendida de cada dia, a la persona registrada:\n\n\n");
 system ("pause");
 system ("cls");
 for(i=1;i<=personas;i++)
 {
 printf("Persona %d\n\n",i);
 sum=0;
 for (c=1;c<=dia;c++)
 {
 printf("Dia %d\n",c);
 scanf("%d", &cant[c]);
 sum1=sum1+cant[c];
 sum=sum+cant[c];
 }
 ventas[i-1] = sum;
 system("cls");
 }
printf("REGISTRO\n\n\n");
 printf("TOTAL DE UNIDADES VENDIDAS (De cada vendedor):");
 for(i=1;i<=personas;i++)
 {
 printf("\nPersona %d\n",i);
 printf("Ventas: %d", ventas[i-1]);
 printf("\n");
 }
 printf("\n\n\n");
 system("pause");
 system("cls");
 printf("REGISTRO\n\n\n");
 printf("TOTAL GENERAL:\n%d unidades vendidas.",sum1);
 printf("\n\n\n");
 system("pause");
 system("cls");
 printf(">>REGISTRO<<\n\n\n");
 mayor = ventas[0];
 indice = 1;
 for(int j=2;j<=personas;j++)
 {
 if(ventas[j-1]>mayor){
 mayor=ventas[j-1];
 indice = j;
 }
 }
 printf("VENDEDOR CON LA MAYOR VENTA DIARIA:\nPersona: %d\nCantidad: %d\n", indice, mayor);
return 0;
}