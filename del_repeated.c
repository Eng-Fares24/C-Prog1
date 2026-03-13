#include <stdio.h>

void delete_repeated(char* s){
    int i, j, k;
    for(i=0 ; s[i]!='\0' ; i++){
       if(s[i] == ' ') continue;
       for(j=i+1 ; s[j]!='\0' ; j++){
          if(s[i] != s[j])continue;
          else{
            for(k=j ; s[k]!='\0' ; k++)
               s[k] = s[k+1];
            j--;
          }
       }
    }
}

int main(){
    char s[100] = "    LolxxxxxxLhehehe23433  xcLol  xx 33 ";
    delete_repeated(s);
    printf("%s", s);
    return 0;
}