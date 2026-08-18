#include<stdio.h>
void swap(int *a, int *b);
int main(){
    int a;
    int b;
    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);
    printf("Before swapping: a = %d, b = %d\n", a, b);
    swap(&a, &b);
return 0;
}
void swap(int *a, int *b){
    int t=*a;
    *a=*b;
    *b=t;
    printf("After swapping: a = %d, b = %d\n", *a, *b);
}
   