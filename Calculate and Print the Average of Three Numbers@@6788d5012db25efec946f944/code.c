#include<stdio.h>
int main()
{
    int a,b,c;
    float av;
    printf("");
    scanf("%d %d %d",&a,&b,&c);
    av = a + b + c / 3.0;
    printf("Average: %.2f",av);
    return 0;
}