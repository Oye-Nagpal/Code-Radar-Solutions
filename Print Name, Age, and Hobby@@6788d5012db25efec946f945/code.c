#include <stdio.h>


int main() {
    char name[20];
    int age;
    char hobby[20];
    scanf("%c%d%c" ,&name,&age,&hobby);
    printf("Name: %c\nAge: %d\nHobby: %c\n",name,age,hobby);
    return 0;
}