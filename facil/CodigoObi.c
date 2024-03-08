#include <stdio.h>

int main()
{
    int n,x, cont = 0;
    int vet[3] = {1,0,0};
    
    scanf("%d",&n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d",&x);
    }
    int vetor[x];
    for (int i = 0; i < n; i++)
    {
        if (vet[i] == vetor[x])
        {
            cont++;
        }
        
        
        
    }
    
    printf("%d",cont);


    return 0;
}