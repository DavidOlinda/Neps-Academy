#include <stdio.h>

int main() {
    int a,b,media;
    int pA=4;
    int pB=6;
    scanf("%d %d",&a,&b);
    int p1 = a*pA;
    int p2 = b*pB;
    media = (p1+p2)/(pA+pB);
    printf("%d",media);
    return 0;
}