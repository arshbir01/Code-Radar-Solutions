#include <stdio.h>
int main() 
{
    int a;
    printf("");
    scanf("%d", &a);
    if(a / 5 && a / 11){
        printf("Divisible");
    }
    else{
        printf("Not Divisible");
    }
    return 0;
}