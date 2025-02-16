#include <stdio.h>
#include <ctype.h>  // Include this library for isupper() and islower()

int main() 
{
    char ch;
    printf("");
    scanf("%c", &ch);

    if (isupper(ch)) {
        printf("Uppercase");
    } else if (islower(ch)) {
        printf("Lowercase");
    } else {
        printf("Not an alphabet");
    }

    return 0;
}
