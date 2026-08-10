#include<stdio.h>
int fibonacci(int n);
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int temp = fibonacci(n);
    printf("The %dth Fibonacci number is %d\n", n, temp);
return 0;
}
int fibonacci(int n){
    if(n==0){
        return 0;
    }
    else if(n==1){
        return 1;
    }
    else{
        int fibNM1 = fibonacci(n-1);
        int fibNM2 = fibonacci(n-2);
        int fibN = fibNM1 + fibNM2;
        return fibN;
    }
}