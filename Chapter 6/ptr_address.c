#include<stdio.h>
int main(){
    int n;
    int *ptr=&n;
    printf("Address of the pointer is : %u\n", &ptr);
    return 0;
}