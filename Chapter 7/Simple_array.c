#include<stdio.h>
int main(){
    int marks[3];
    printf("Enter your scaence marks: ");
    scanf("%d", &marks[0]);
    printf("Enter your maths marks: ");
    scanf("%d", &marks[1]);
    printf("Enter your english marks: ");
    scanf("%d", &marks[2]);
    printf("Your science marks are: %d\n", marks[0]);
    printf("Your maths marks are: %d\n", marks[1]);
    printf("Your english marks are: %d\n", marks[2]);
    return 0;
}