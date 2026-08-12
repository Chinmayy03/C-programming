#include<stdio.h>
int main(){
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    int *ptr=&n;
    int **pptr=&ptr;
    printf("The number you have entered is %d\n", **pptr);
    return 0;
}