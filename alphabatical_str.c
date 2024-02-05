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
