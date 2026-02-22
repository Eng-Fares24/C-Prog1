#include <stdio.h>
#include <string.h>
#include <math.h>

void StringOfDigits(char *p, char s2[]);
int StringToInt(char s2[]);
int atoi(char *s1);

int atoi(char *s1) {
    char *p = s1;
    char s2[100];
    while (*p == ' ') p++;
    if (*p == '+') {
        p++;
        StringOfDigits(p, s2);
        return StringToInt(s2);
    }
    if (*p == '-') {
        p++;
        StringOfDigits(p, s2);
        return -1 * StringToInt(s2);
    }
    if (*p >= '0' && *p <= '9') {
        StringOfDigits(p, s2);
        return StringToInt(s2);
    }
    return 0;
}
int StringToInt(char s2[]) {
    int num = 0, len = strlen(s2);
    for (int i = 0; i < len; i++) {
        num += (s2[i] - '0') * pow(10, len - i - 1);
    }
    return num;
}
void StringOfDigits(char *p, char s2[]) {
    int k = 0;
    while (*p >= '0' && *p <= '9') {
        s2[k++] = *p;
        p++;
    }
    s2[k] = '\0';
}

int main() {
    char S[100];
    printf("Enter string :  ");
    fgets(S, 100, stdin);
    int num = atoi(S);
    printf("%d\n", num);
    return 0;
}
