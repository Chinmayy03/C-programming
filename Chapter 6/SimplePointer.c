#include<stdio.h>
int main(){
    int age;
    printf("Enter your age: ");
    scanf("%d",&age);
    int *ptr=&age;
    int _age=*ptr;
    printf("Your age is %d\n",_age);
}