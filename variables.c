#include <stdio.h>
#include <string.h>

int main(){
    char name[] = "anis";
    int age = 4;
    float pi = 3.14;
    printf("My name is %s \n", strupr (name));
    printf("My age is %d \n", strlen(name));
    printf("My pi value is %f", pi);
    return 0;
}