#include <stdio.h>

int main() {
    int l;
    scanf("%d",&l);
    int x[l];
    char c[l];
    for (int i = 0; i < l; i++)
    {
        scanf("%d %c",&x[i], &c[i]); 
    }
    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < x[i]; j++)
        {
            printf("%c", c[i]);
        }
         printf("\n");
    }
    
    
    return 0;
}