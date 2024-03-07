#include <stdio.h>
int main()
{
   int pontoA,pontoB,pontoC,y_horas,z_horas,x_horas;
   scanf("%d %d %d",&x_horas, &y_horas, &z_horas);

   if (x_horas + y_horas <= z_horas )
   {
    printf("1");
   }
   else{
    printf("0");
   }
   
}