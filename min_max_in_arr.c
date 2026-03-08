#include <stdio.h>

void min_max(int arr[], int size, int *min , int *max){
    for(int i =0; i<size; i++){
        if(arr[i]>*min)
          continue;
        else
          *min = arr[i];
    }
    for(int j =0; j<size; j++){
        if(arr[j]<*max)
          continue;
        else
          *max = arr[j];
    }
}

int main(){

    int arr[] = {1, -5,  23, 36, 55}, max=arr[0], min =arr[0],
    size = sizeof(arr)/sizeof(arr[0]);
    min_max(arr, size, &min, &max);
    printf("min value is :  %d\n", min);
    printf("max value is :  %d", max);

    return 0;
}