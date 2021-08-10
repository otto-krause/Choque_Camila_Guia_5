#include <stdio.h>
#include <stdlib.h>
int main()
{
 int cantAlumnos = 30;
 int cantNotas = 10;
 int i,notas=0,c=1;
 float prom=0,sum0,totalprom,sum1=0;
 for(i=1;i<=cantAlumnos;i++)
 {
 printf("Alumno %d\n",i);
 printf("Ingrese las notas del alumno: \n");
 sum0=0;
 reinicio:
 for (c=1;c<=cantNotas;c++)
 {
 scanf("%d",&notas);
 if (notas<0 || notas>10)
 {
 notas=0;
 system("cls");
 printf("\nIngrese bien las notas correspondientes.\n\n");
 system("pause");
 system("cls");
 printf("Alumno %d\n",i);
 printf("Ingrese las notas del alumno: \n");
 sum0=0;
 goto reinicio;
 }
 sum0=sum0+notas;
prom=sum0/cantNotas;
 }
 printf("\nEl promedio del alumno %d es: %.2f\n",i,prom);
 system("pause");
 system("cls");
 sum1=sum1+prom;
 }
 totalprom=sum1/cantAlumnos;
 printf("\nEl promedio general de todo el curso es: %.2f\n",totalprom);
 return 0;
}