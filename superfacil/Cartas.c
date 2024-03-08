#include <stdio.h>
int main (){
    int a, b, c,d;
    scanf("%d %d %d",&a, &b, &c);

    if (a == b)
    {
        printf("%d",c);
    }
    else if (b == c)
    {
        printf("%d",a);
    }
    else{
        printf("%d",b);
    }
    return 0;
}