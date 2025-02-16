// #include <stdio.h>
// #include <ctype.h>  // Include this library for isupper() and islower()

// int main() 
// {
//     char ch;
//     printf("");
//     scanf("%c", &ch);

//     if (isupper(ch)) {
//         printf("Uppercase");
//     } else if (islower(ch)) {
//         printf("Lowercase");
//     } else {
//         printf("Not an alphabet");
//     }

//     return 0;
// }




#include <stdio.h>

int main() 
{
    char ch;
    printf("");
    scanf("%c", &ch);

    // Check if the character is uppercase
    if (ch >= 'A' && ch <= 'Z') {
        printf("Uppercase");
    }
    // Check if the character is lowercase
    else if (ch >= 'a' && ch <= 'z') {
        printf("Lowercase");
    } else {
        printf("Not an alphabet");
    }

    return 0;
}


