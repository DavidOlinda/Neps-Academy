#include <stdio.h>

int main()
{
    int n, sum, x;
    sum = 0;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &x);
        sum += x;
    }
    printf("%d",sum);
    return 0;
}