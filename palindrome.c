#include <stdio.h>
int main() {
    int n=121, reversedN = 0, remainder, originalN;
   
    originalN = n;
   
    while (n != 0) {
        remainder = n % 10;
        reversedN = reversedN * 10 + remainder;
        n /= 10;
    }
   
    if (originalN == reversedN)
        printf("%d is a palindrome.", originalN);
    else
        printf("%d is not a palindrome.", originalN);
    return 0;
}
