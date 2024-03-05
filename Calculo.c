#include <stdio.h>
int main()
{
    int a,b,maior,menor,soma1,soma2;
    scanf("%d %d",&a,&b);
    soma1 = a + b;
    soma2 = a - b;

    if (soma1 > soma2)
    {
        maior = soma1;
        menor = soma2;
    }
    else{
        maior = soma2;
        menor = soma1;
    }
    
    
    
    
    printf("%d\n", maior);
    printf("%d", menor);
}