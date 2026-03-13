#include <stdio.h>
#include <string.h>

int main() {
    char s1[100] = "  h  hheyyy!   ::33 hhehe  ";
    char *p = s1;

    while ((p = strstr(p, " ")) != NULL) {
        while (*p == ' ') p++;
        if (*p == '\0') break;
        int start = p - s1;
        for (int i = start; s1[i] != '\0'; i++)
            s1[i] = s1[i + 1];
        p = s1 + start;
    }

    printf("%s", s1);
    return 0;
}
