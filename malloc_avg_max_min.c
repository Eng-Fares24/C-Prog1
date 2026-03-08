#include <stdio.h>
#include <stdlib.h>

float* calculate(float* arr, int size) {
    int i;
    float *temp = malloc(sizeof(float) * 3);
    if (!temp) {
        printf("memory allocation failed\n");
        exit(1);
    }
    float max = arr[0], min = arr[0], sum = 0.0;
    for(i = 0; i < size; i++) {
        if(arr[i] > max) max = arr[i];
        if(arr[i] < min) min = arr[i];
        sum += arr[i];
    }
    temp[0] = min; temp[1] = max; temp[2] = sum / size;
    return temp;
}

int main() {
    int size;
    printf("Enter num of elements: ");
    scanf("%d", &size);
    
    float arr[size];
    for(int i = 0; i < size; i++) {
        printf("Enter element: ");
        scanf("%f", &arr[i]);
    }

    float *temp = calculate(arr, size);
    printf("min: %.2f\t max: %.2f\t avg: %.2f", temp[0], temp[1], temp[2]);

    free(temp);
    return 0;
}
