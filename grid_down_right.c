#include <stdio.h>
#include <string.h>
void swap(char *x, char *y)
{
    char temp = *x;
    *x = *y;
    *y = temp;
}
int is_duplicate(char *str, int start, int current)
{
    for (int i = start; i < current; i++)
    {
        if (str[i] == str[current])
        {
            return 1; // Duplicate found
        }
    }
    return 0; // No duplicate found
}
void generate_permutations(char *str, int start, int end)
{
    if (start == end)
    {
        printf("%s\n", str);
    } else
    {
        for (int i = start; i <= end; i++)
        {
            if (!is_duplicate(str, start, i))
            {
                swap((str + start), (str + i));
                generate_permutations(str, start + 1, end);
                swap((str + start), (str + i));
            }

        }
    }
}
void string_permutations(char *input_string)
{
    int length = strlen(input_string);
    generate_permutations(input_string, 0, length - 1);
}

int main()
{
    int r=0,c=0;
    printf("Enter the number of rows:");
    scanf("%d",&r);
    printf("Enter the number of columns:");
    scanf("%d",&c);
    char input_str[100] = "";
    for (int i=0;i<r;i++)
    {
        input_str[i]='D';
    }
    for (int j=0;j<c;j++)
    {
        input_str[r+j]='R';
    }
    printf("The number of possibilities are :\n");
    string_permutations(input_str);

    return 0;
}
