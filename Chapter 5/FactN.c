#include<stdio.h>
int fact(int n);
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
int temp = fact(n);
printf("Factorial of %d is %d",n,temp);
    return 0;
}
int fact(int n){
    if(n<=1){
        return 1;
    }
        int factNM1 = fact(n-1);
        int factorial= factNM1*n;
        return factorial;
    
}