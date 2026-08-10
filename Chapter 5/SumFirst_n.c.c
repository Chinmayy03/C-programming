#include<stdio.h>
int sum(int n);
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
int temp = sum(n);
printf("Sum of first %d natural numbers is %d",n,temp);
    return 0;
}
int sum(int n){
    if (n<=1){
        return n;
    }
   int sumNM1 = sum(n-1);
    int sum=sumNM1 + n;
    return sum;
}