#include <stdio.h>
#include <stdlib.h>
int main()
{
 int i,personas=4,menos=0,mas=0,igual=0;
 float sueldo;
 printf("Ingrese el sueldo de cada persona registrada:\n");
for(i=1;i<=personas;i++)
 {
 system ("cls");
 printf("Sueldo de persona %d\n",i);
 scanf("%f", &sueldo);
 if (sueldo>2000)
 {
 mas++;
 }
 else
 {
 if(sueldo<2000)
 {
 menos++;
 }
 else
 {
 if(sueldo==2000)
 {
 igual++;
 }
 }
 }
 }
system("cls");
printf ("REGISTROS:\n%d personas ganan menos de $2000.\n%d personas ganan mas de $2000.\n%d personas ganan $2000\n",menos,mas,igual);
 return 0;
}