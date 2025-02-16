// #include<stdio.h>
// int main()
// {
//     int a,b;
//     printf("");
//     scanf("%d %d",&a,&b);
//     if(a>b){
//         printf("%d",a);
//     }
//     else if(b>a){
//         printf("%d",b);
//     }
//     else{
//         printf("");
//     }
//     return 0;
// }




#include<stdio.h>

int main()
{
    int a, b;
    printf("");
    scanf("%d %d", &a, &b);  // Read two integers from the user
    
    if(a > b) {
        printf("%d\n", a);  // Print a if a is greater than b
    }
    else if(b > a) {
        printf("%d\n", b);  // Print b if b is greater than a
    }
    else {
        printf("");  // If both are equal
    }
    
    return 0;
}
