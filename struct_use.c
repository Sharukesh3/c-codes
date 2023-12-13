#include <stdio.h>
#include<string.h>
int main()
{
    struct person{
    char name[50];
    int age;
    float height;
    };
struct person person1;
strcpy(person1.name,"jonney");
person1.age=234;
person1.height=132.2;
printf("%s",person1.name);
}
