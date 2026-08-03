#include<stdio.h>
int main(){
    
    int n;
    
    do{
        printf("Enter a number: ");
        scanf("%d", &n);
    }while(n % 2 == 0);
    
    if(n % 2 != 0){
        printf("You entered an odd number: %d", n);
    }
    
    return 0;
}
