#include<stdio.h>
int main(){
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    int *ptr=&age;
    int **pptr=&ptr;
    printf("Your age is %d\n", **pptr);
    return 0;
}