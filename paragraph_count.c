#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int CheckWord(char* temp){
    for(int i = 0; temp[i] != '\0'; i++){
        if(!isalpha(temp[i]))
            return 0;
    }
    return 1;
}

int CheckNumber(char* temp){
    for(int i = 0; temp[i] != '\0'; i++){
        if(!isdigit(temp[i]))
            return 0;
    }
    return 1;
}

int main(){
    char str[1000];
    int word = 0, number = 0, mixed = 0;
    printf("Enter paragraph : ");
    fgets(str, 1000, stdin);
    
    char* temp = strtok(str, " \t\n`~!@#$%^&*()-_=+[{]}\\|;:'\",<.>/?");
    while(temp != NULL){
        if(CheckNumber(temp))
            number++;
        else if(CheckWord(temp))
            word++; 
        else
            mixed++;       
        temp = strtok(NULL, " \n\t`~!@#$%^&*()-_=+[{]}\\|;:'\",<.>/?");
    }
    printf(" words : %3d\n numbers : %d\n mixed : %3d", word, number, mixed);
    return 0;
}

