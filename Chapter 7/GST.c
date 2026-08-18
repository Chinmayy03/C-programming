#include<stdio.h>
int main(){
    int arr[3];
    printf("Enter price of first item: ");
    scanf("%d", &arr[0]);
    printf("Enter price of second item: ");
    scanf("%d", &arr[1]);
    printf("Enter price of third item: ");
    scanf("%d", &arr[2]);
    printf("Price of first item including GST is: %.2f\n", arr[0]+(0.18*arr[0]));
    printf("Price of second item including GST is: %.2f\n", arr[1]+(0.18*arr[1]));
    printf("Price of third item including GST is: %.2f\n", arr[2]+(0.18*arr[2]));
}