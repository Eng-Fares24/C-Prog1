#include <stdio.h>

int fn(int a[], int size, int integer){
    if(integer == 0){
        printf("ERROR #division by zero\n");
        return -1;
    }
    for(int i = 0; i < size; i++){
        if(a[i] % integer == 0)
            printf("%d\t", a[i]);
    }
    return 0;
}

int main(){
    int a[] = {1, 3, 54, 82, 11, 4};
    int size = sizeof(a)/sizeof(a[0]);
    int integer = 2;

    int result = fn(a, size, integer);
    return 0;
}
