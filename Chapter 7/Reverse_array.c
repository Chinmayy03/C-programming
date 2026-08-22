#include<stdio.h>
int reverse(int arr[], int n);
void printarray(int arr[], int n);
int main(){
    int arr[5]={1, 2, 3, 4, 5};
    reverse(arr, 5);
    printf("Reversed array:\n");
    printarray(arr, 5);
    return 0;


}
int reverse(int arr[], int n){
    for(int i=0; i<n/2; i++){
        int firstval=arr[i];
        int secval=arr[n-i-1];
        arr[i]=secval;
        arr[n-i-1]=firstval;
    }
}
void printarray(int arr[], int n){
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}