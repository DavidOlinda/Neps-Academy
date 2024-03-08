#include <stdio.h>

int main()
{
    int x;
    char palavra[100];
    scanf("%d",&x);
    scanf(" %[^\n]s", palavra);
    for (int i = 0; i < x ; i++)
    {
        printf("%s \n", palavra);
    }
    
    
    

    return 0;
}