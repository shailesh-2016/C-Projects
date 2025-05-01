#include <stdio.h>

int main() {
    char str[] = "Hello World";
    char *ptr = str;
    int length = 0;

    while (*ptr != '\0') {
        length++;
        ptr++;
    }

    printf("Length of string: %d\n", length);
    return 0;
}
