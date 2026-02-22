#include <stdio.h>
#include <ctype.h>

void Vow_Const_check(int N, int *vowels , int *constants){
    char str[N +1 ];
    printf("Enter %d characters #avoid spaces: ", N);
    fgets(str, sizeof(str), stdin);
 
    for(int i = 0; i< N; i++){
        char character = tolower(str[i]);
        if(isalpha(character)){
           if(character== 'a' || character== 'e' || character== 'u' || character== 'i' || character== 'o')
           (*vowels) += 1;
           else (*constants) +=1;
        }    
    }  
    printf("vowels = %d\tconstants = %d",*vowels, *constants);
    return;
}

int main(){

    int N , vowels =0 , constants=0;
    printf("Enter N number of chars : ");
    scanf("%d", &N);
    getchar();
    Vow_Const_check(N, &vowels, &constants);

    return 0;
}