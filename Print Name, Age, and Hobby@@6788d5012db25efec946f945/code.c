#include <stdio.h>


int main() {
    char name[20];
    int age;
    char hobby[20];
    scanf("%s%d%s" ,&name,&age,&hobby);
    printf("Name: %s\nAge: %d\nHobby: %s\n",name,age,hobby);
    return 0;
}