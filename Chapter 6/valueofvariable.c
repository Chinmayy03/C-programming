#include<stdio.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int *ptr=&n;
    printf("Value of the number is %d\n",n);
    printf("Value of the number is %d\n",*ptr);
    printf("Value of the number is %d\n", *(&n));
    return 0;
}