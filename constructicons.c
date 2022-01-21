#include<stdio.h>
void main()
{
int op,valor;
printf("=================================================\n");
printf("+¿Como se llama el lider de los constructicons? +\n");
printf("+1)hook                                         +\n");
printf("+2)mixmaster                                    +\n");
printf("+3)scrapper                                     +\n");
printf("=================================================\n");
printf("Respuesta:");scanf("%d",&op);
if(op==3)
{printf("Correcto\n"); 
valor=20;
printf("Nota:%d",valor);
printf("\n");
}
else
{printf("Incorrecto\n");
valor=0;
printf("Nota:%d",valor);
printf("\n");
}
}

