#include <stdio.h>

int isVowel(char ch)
{
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
       ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
        return 1;
    else
        return 0;
}

int main()
{
    char ch1, ch2;
    int ascii1, ascii2;

    printf("Enter first character: ");
    scanf(" %c", &ch1);

    printf("Enter second character: ");
    scanf(" %c", &ch2);

    ascii1 = ch1;
    ascii2 = ch2;

    printf("ASCII of %c = %d\n", ch1, ascii1);
    printf("ASCII of %c = %d\n", ch2, ascii2);

    if(isVowel(ch1) && isVowel(ch2))
        printf("Sum = %d\n", ascii1 + ascii2);
    else if(isVowel(ch1) || isVowel(ch2))
        printf("Difference = %d\n", ascii1 - ascii2);
    else
        printf("Product = %d\n", ascii1 * ascii2);

    return 0;
}
