#include<stdio.h>
#include<conio.h>
void isVowel(char ch)
{
    switch (ch)
    {
    case 'a':
    printf("Character is a vowel\n");
    break;
    case 'e':
    printf("Character is a vowel\n");
    break;
    case 'i':
    printf("Character is a vowel\n");
    break;
    case 'o':
    printf("Character is a vowel\n");
    break;
    case 'u':
    printf("Character is a vowel\n");
    break;
    case 'A':
    printf("Character is a vowel\n");
    break;
    case 'E':
    printf("Character is a vowel\n");
    break;
    case 'I':
    printf("Character is a vowel\n");
    break;
    case 'O':
    printf("Character is a vowel\n");
    break;
    case 'U':
    printf("Character is a vowel\n");
    break;
    
    default:
    printf("Character is a consonant");
    break;
    }

}
int main()
{
    char ch;
    printf("\n enter any character: \n");
    scanf("%c",&ch);
    isVowel(ch);
    return 0;
}