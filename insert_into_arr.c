#include <stdio.h>

void insert(int *a, int *size, int *num){
    int i;
    for (i = 0; i < *size; i++) {
        if (*(a + i) < *num)
            continue;
        else
            break;
    }
    for (int k = *size; k > i; k--) {
        *(a + k) = *(a + k - 1);
    }
    *(a + i) = *num;
    (*size)++;
}

int main(){
    int a[10] = {1, 4, 66, 76, 80};  
    int size = 5;    
    int num;

    printf("Enter a num: ");
    scanf("%d", &num);

    insert(a, &size, &num);

    return 0;
}