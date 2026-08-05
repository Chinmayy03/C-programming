#include<stdio.h>
int printtable(int n);
int main(){
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printtable(n);
    return 0;
}
int printtable(int n){
    for(int i=1 ; i<=10 ; i++){
        printf("%d x %d = %d\n", n, i, n*i);
    }
    return 0;
}