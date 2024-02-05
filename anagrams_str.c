#include <stdio.h>

void swap(char *a, char *b)
{
    char temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSortString(char str[])
{
    int length = 0;
    while (str[length] != '\0')
    {
        length++;
    }

    for (int i = 0; i < length - 1; i++)
        {
        for (int j = 0; j < length - i - 1; j++)
        {
            if (str[j] > str[j + 1]) {
                swap(&str[j], &str[j + 1]);
            }
        }
    }
}

int main() {

    char s1[100] = "apple",s2[100]="aaple";
    char c;
    int i = 0;


    bubbleSortString(s1);
    bubbleSortString(s2);
    if (s1==s2)
    {
        printf("The string is an anagram");
    }
    else
    {
        printf("The string is not an anagram");
    }

    return 0;
}
