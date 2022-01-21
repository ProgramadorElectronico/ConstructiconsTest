#include<stdio.h>
void main()
{
int op1,op2,op3,op4;
int n1,n2,n3,n4,total;
printf("=================================================\n");
printf("+¿Como se llama el lider de los constructicons? +\n");
printf("+1)hook                                         +\n");
printf("+2)mixmaster                                    +\n");
printf("+3)scrapper                                     +\n");
printf("=================================================\n");
printf("Respuesta:");scanf("%d",&op1);
printf("=================================================\n");
printf("+         ¿Hook en su forma vehiculo es?        +\n");
printf("+1)volquete                                     +\n");
printf("+2)grua                                         +\n");
printf("+3)bulldozer                                    +\n");
printf("=================================================\n");
printf("Respuesta:");scanf("%d",&op2);
printf("=================================================\n");
printf("+ ¿Quien es un bulldozer en su forma vehiculo?  +\n");
printf("+1)hook                                         +\n");
printf("+2)scavenger                                    +\n");
printf("+3)bonecrusher                                  +\n");
printf("=================================================\n");
printf("Respuesta:");scanf("%d",&op3);
printf("=================================================\n");
printf("+   ¿Cuantos robot forman a Devastator?         +\n");
printf("+1)5                                            +\n");
printf("+2)6                                            +\n");
printf("+3)4                                            +\n");
printf("=================================================\n");
printf("Respuesta:");scanf("%d",&op4);
if(op1==3)
n1=5;
else
n1=0;
if(op2==2)
n2=5;
else
n2=0;
if(op3==3)
n3=5;
else
n3=0;
if(op4==2)
n4=5;
else
n4=0;
total=n1+n2+n3+n4;
printf("\n");
printf("Nota:%d",total);
printf("\n");
}

