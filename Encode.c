#include <stdio.h>
#include <string.h>

void Encode(char* str){
    int i;
    for(i=0 ; str[i] != '\0'; i++){
        if(str[i]>='a' && str[i]<'x')
            str[i] += 3;  
        else if(str[i] >= 'x' && str[i] <= 'z')
            str[i] -= 23;  
        else if(str[i]>='A' && str[i]<'Y')
            str[i] += 2;
        else if(str[i]>='Y' && str[i]<='Z')
            str[i] -= 24;              
        else if(str[i]>= '0' && str[i]<'9')
            str[i] += 1;
        else if( str[i] == '9')
            str[i] = '0';
    }
}

int main(){
    char str[100];
    printf("Enter a string : ");
    fgets(str, 100, stdin);
    Encode(str);
    printf("%s", str);
}