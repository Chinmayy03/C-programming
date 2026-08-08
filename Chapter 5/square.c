#include<stdio.h>
#include<math.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("Square of %d is %d",n,square(n));
    return 0;
}
int square(int n){
    return pow(n,2);
}