#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
    int i,n;

    char a[] = "dog";
    char b[3];

    n = strlen(a);
    for (i=n-1; i>=0;i--) {
        b[n-1-i] = a[i];
    }
    b[n] = '\0';
    printf("%s的倒序排列为: %s", a, b);
    return 0;
}