#include <stdio.h>

int main(int argc, char *argv) {
    int i=0,j=0;
    char a[10] = "hello", b[] = "world";
    printf("%s+%s=", a, b);

    while(a[i]!= '\0') {
        i++;
    }
    while (b[j]!='\0') {
        a[i] = b[j];
        i++;
        j++;
    }

    a[i] = '\0';
    printf("%s\n", a);
    return 0;
}