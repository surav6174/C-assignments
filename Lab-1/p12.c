/*
    Lab 1
    12. Write a program to read name and age of the user and display them.
*/

#include <stdio.h>
#include <conio.h>

int main()
{
    char name[100]; // the length of an array must be pre-defined
    unsigned int age;

    printf("C program to read name and age and display them\n");

    printf("Enter your name: ");
    gets(name);

    printf("Enter your age: ");
    scanf("%u", &age);

    printf("Name : %s\n", name);
    printf("Age : %u", age);

    getch();
    return 0;
}
