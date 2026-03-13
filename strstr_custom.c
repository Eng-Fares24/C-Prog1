#include <stdio.h>
#include <string.h>

char* strstr_custom(char *str1, char *str2){
    int i, j, len1 = strlen(str1), len2 = strlen(str2);
    for(i = 0; i <= len1 - len2; i++){
        if(str1[i] != str2[0])
            continue;
        else{
            for(j = 0; j < len2; j++){
                if(str2[j] != str1[i + j])
                    break;
            }
            if(j == len2)
                return &str1[i];
        }
    }
    return NULL;
}

int main(){
    char s1[] = "loalolxd";
    char s2[] = "lol";
    char *n = strstr_custom(s1, s2);
    int z = n? (n - s1) : -1;
    printf("%d", z);
    return 0;
}
