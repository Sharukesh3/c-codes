#include<stdio.h>
#include<string.h>

int main() {
    int s = 0;
    int f = 0;
    char i[100];
    printf("Enter a string: ");
    fgets(i, sizeof(i), stdin);
    int length = strlen(i);

    for (int j = 0; j < length; j++) {
        while (i[j] != ' ' && i[j] != '\0' && i[j] != '\n') {
            j++;
        }
        f = j - 1;
        for (int k = f; k >= s; k--) {
            printf("%c", i[k]);
        }
        s = j + 1;
        if (i[j] == '\0' || i[j] == '\n') {
            break;
        }
        printf(" ");  // Print space between reversed words
    }

    return 0;
}
