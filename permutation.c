#include <stdio.h>
#include <string.h>
void swap(char *x, char *y)
{
    char temp = *x;
    *x = *y;
    *y = temp;
}
void generate_permutations(char *str, int start, int end) {
    if (start == end)
        {
        printf("%s\n", str);
    } else {
        for (int i = start; i <= end; i++)
        {
            swap((str + start), (str + i));
            generate_permutations(str, start + 1, end);
            swap((str + start), (str + i));
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
    char input_str[] = "abc";
    string_permutations(input_str);

    return 0;
}
