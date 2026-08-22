#include<stdio.h>
int countodd(int arr[5]);
int main(){
    int arr[5];
    printf("Enter array of 5 integers:\n");
    for(int i = 0; i < 5; i++){
        scanf("%d", &arr[i]);
    }
    int oddCount = countodd(arr);
    printf("Number of odd integers: %d\n", oddCount);
    return 0;
}
int countodd(int arr[5]){
    int count = 0;
    for(int i = 0; i < 5; i++){
        if(arr[i] % 2 != 0){
            count++;
        }
    }
    return count;
}