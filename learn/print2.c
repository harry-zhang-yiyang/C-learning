#include <stdio.h>

int main(void) {
    unsigned int un = 3000000000;  // Use %u for unsigned int
    short end = 200;               // Use %hd for short
    long big = 65537;              // Use %ld for long
    long long verybig = 12345678908642;  // Use %lld for long long

    printf("un = %u and not %d\n", un, un);  // Correct format for unsigned int
    printf("end = %hd and %d\n", end, end);  // Correct format for short
    printf("big = %ld and not %ld\n", big, big);  // Fixed %hd -> %ld
    printf("verybig = %lld and not %lld\n", verybig, verybig);  // Fixed %ld -> %lld

    return 0;
}
