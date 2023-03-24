#include <stdio.h>

int main() {
    signed char i = 0;
    for (; i < 127; i++) ;
    printf("%d\n", i);
    return 0;
}
output: -128