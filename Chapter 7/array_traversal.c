#include<stdio.h>
int main(){
    int adhaar[5];
    for(int i=0; i<5; i++){
        printf("%d index adhaar number=",i);
        scanf("%d",&adhaar[i]);
    }
    for(int i=0; i<5; i++){
        printf("%d\n", adhaar[i]);
    }
    return 0;
}