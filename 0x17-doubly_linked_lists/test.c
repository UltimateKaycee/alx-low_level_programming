#include <stdio.h>

int isPalindrome(int num) {
    int reversed = 0, original = num;

    while (num > 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }

    return original == reversed;
}

int main() {
    int maxPalindrome = 0;

    for (int i = 100; i < 1000; ++i) {
        for (int j = i; j < 1000; ++j) {
            int product = i * j;

            if (isPalindrome(product) && product > maxPalindrome) {
                maxPalindrome = product;
            }
        }
    }

    printf("The largest palindrome made from the product of two 3-digit numbers is: %d\n", maxPalindrome);

    return 0;
}
