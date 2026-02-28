#include <stdio.h>

int main()
{
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch);

    // Check if it is an alphabet
    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
    {
        // Convert uppercase to lowercase for easy checking
        if (ch >= 'A' && ch <= 'Z')
        {
            ch = ch + 32;
        }

        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        {
            printf("It is a Vowel.\n");
        }
        else
        {
            printf("It is a Consonant.\n");
        }
    }
    else
    {
        printf("It is NOT a Letter.\n");
    }

    return 0;
}


