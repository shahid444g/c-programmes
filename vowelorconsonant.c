#include <stdio.h>
int main()
{
    char word;
    printf("enter the word ");
    word = getchar();
    word = toupper(word);
    if (word =='A' || word == 'E' || word == 'I' || word == 'O' || word == 'U')
    {
        printf("vowel");

    }
    else{
        printf("consonant");
    }
    return 0;
}