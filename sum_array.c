#include <stdio.h>

void ind_Sv(int arr[], int size, int Sv){
    for(int i = 0; i < size; i++){
        if(arr[i] == Sv){
            printf("found at index: %d", i);
            return;
        }
    }
    printf("not found :(( ");
}

int main(){
    int sv;
    int arr[] = {1, 22, 5, 65, 7};

    printf("enter num: ");
    scanf("%d", &sv);

    ind_Sv(arr, sizeof(arr) / sizeof(arr[0]), sv);
    return 0;
}