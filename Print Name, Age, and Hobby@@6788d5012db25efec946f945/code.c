#include <stdio.h>


int main() {
    char name[20];
    int age;
    char hobby[20];
    scanf("_%c%d_%c" ,&name,&age,&hobby);
    printf("Name: _%c\nAge: %d\nHobby: _%c\n",name,age,hobby);
    return 0;
}