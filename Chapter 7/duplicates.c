#include <stdio.h>
#include <stdbool.h>

bool duplicate(int arr[5]);

int main(){
    int arr[5];
    printf("Enter array of 5 integers:\n");
    for(int i = 0; i < 5; i++){
        scanf("%d", &arr[i]);
    }

    if (duplicate(arr)) {
        printf("Contains duplicate: True\n");
    } else {
        printf("Contains duplicate: False\n");
    }

    return 0;
}

bool duplicate(int arr[5]){
    for(int i = 0; i < 5; i++){
        for(int j = i + 1; j < 5; j++){
            if(arr[i] == arr[j]){
                return true;
            }
        }
    }
    return false;
}
