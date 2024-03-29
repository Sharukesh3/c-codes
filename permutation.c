#include <stdio.h>
#include <string.h>
int count=0;
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
void generate_permutations(char *str, int start, int end) {
    if (start == end)
        {
        printf("%s\n", str);
        count = count+1;
    } else {
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
    char input_str[] = "rrdd";
    string_permutations(input_str);
    printf("The number of permutations are %d",count);

    return 0;
}
