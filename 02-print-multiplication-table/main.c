#include <stdio.h>

int main() {
    printf("Which table you want to print:\n");
    int input;
    scanf("%f", &input); // Use "%d" format specifier for integer input                              

    for(int i = 1; i <= 10; i++) {
        printf("%.3f x %2d = %6.3f  ", input, i, input*i); // Use "%d" format specifier for integer input
        printf("%2d x %.3f = %6.3f\n", i, input, input*i); // Use "%d" format specifier for integer input
    }
    return 0;
}
