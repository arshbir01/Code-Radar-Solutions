#include <stdio.h>

int main() 
{
    float a, b, c;

    // Input sides of the triangle
    printf("");
    scanf("%f %f %f", &a, &b, &c);

    // Check for triangle validity using the triangle inequality theorem
    if (a + b > c && a + c > b && b + c > a) {
        printf("Valid");
    } else {
        printf("Invalid");
    }

    return 0;
}
