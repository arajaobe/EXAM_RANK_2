#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "hello.world";
    char str2[] = ".!?";

    char *pos = strpbrk(str1, str2);

    printf("%s", pos);

    return 0;
}
