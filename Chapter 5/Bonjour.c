#include<stdio.h>
void bonjour();
void namaste();
int main(){
    printf("Enter a character based on nationality(i=indian, f=french): ");
    char nationality;
    scanf(" %c", &nationality);
    if(nationality == 'i'){
        namaste();
    }
    else if(nationality == 'f'){
        bonjour();
    }
    return 0;
}
void bonjour(){
    printf("Bonjour\n");
}
void namaste(){
    printf("Namaste\n");
}
