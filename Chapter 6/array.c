#include <stdio.h>

int main() {
    int adhaar[5];
    
    // Loop to take input
    for(int i = 0; i < 5; i++) {
        printf("%d index: ", i);
        scanf("%d", &adhaar[i]); // Added '&' here
    } 
    
    // Loop to print values (moved outside the first loop)
    for(int i = 0; i < 5; i++) {
        printf("%d index: %d\n", i, adhaar[i]);
    } 
    
    return 0;
}
