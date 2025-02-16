#include<stdio.h>
int main()
{
    int a,b;
    printf("");
    scanf("%d %d",&a,&b);
    if(a > 0){
        printf("Positive");
    }
    else if(a == 0){
        printf("Zero")
    }
    else {
        printf("Negative");
    }

    return 0;
}
