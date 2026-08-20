#include<stdio.h>
int main(){
    int age;
    int old;
    int *ptr=&age;
    int*_ptr=&old;
    printf("difference=%u\n",ptr-_ptr);
    printf("Comparision= %u\n", ptr==_ptr);
    return 0;
}