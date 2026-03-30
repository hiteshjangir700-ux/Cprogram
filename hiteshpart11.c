// C Program To Check Vowel or Consonant.
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int isvowel(char ch)
{
    char vowels[]= "aeiouAEIOU";
    //strchr() ye function hai, ye string k andrr kisi char ko search krta hai.
    return (strchr(vowels,ch) != NULL);
}
int main()
{
    system("cls");
    char ch;
    printf("please enter the character:");
    scanf("%c",&ch);
    if (isvowel(ch))
    printf("Chrachter is Vowel \n");
    else
        printf("chracter is not vowel \n");
    return 0;
}