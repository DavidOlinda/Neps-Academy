#include <stdio.h>
int main()
{
    int x;
    int cont = 0;
    char vogal[50];

    scanf("%d ", &x);

    for (int i = 0; i < x; i++)
    {
        scanf("%s", &vogal[i]);
        if (vogal[i] == 'a' || vogal[i] == 'e' || vogal[i] == 'i' || vogal[i] == 'o' || vogal[i] == 'u')
        {
            cont++;
        }
    }
    printf("%d",cont);
}