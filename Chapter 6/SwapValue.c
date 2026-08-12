#include<stdio.h>
void swap(int *x, int *y);
int main(){
    int x, y;
    printf("Enter the value of x: ");
    scanf("%d", &x);
    printf("Enter the value of y: ");
    scanf("%d", &y);
    printf("Before swapping: x = %d, y = %d\n", x, y);
    swap(&x, &y);
    return 0;
}
void swap(int *x, int *y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
    printf("After swapping: x = %d, y = %d\n", *x, *y);
}