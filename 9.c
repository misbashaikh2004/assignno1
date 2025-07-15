#include <stdio.h>

int main() {
    int amt, n1, n5, n10;
    printf("Enter amount to withdraw: ");
    scanf("%d", &amt);

    n10 = amt / 10;
    amt %= 10;
    n5 = amt / 5;
    amt %= 5;
    n1 = amt;

    printf("10 Rs notes: %d\n", n10);
    printf("5 Rs coins: %d\n", n5);
    printf("1 Rs coins: %d\n", n1);
    return 0;
}
