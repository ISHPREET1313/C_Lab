#include <stdio.h>
int main() {
    int n, pos = 0, neg = 0, zero = 0;
    char choice;
    do {
        printf("Enter a number: ");
        scanf("%d", &n);
        if (n > 0)
            pos++;
        else if (n < 0)
            neg++;
        else
            zero++;
        printf("Do you want to continue? (y/n): ");
        scanf(" %c", &choice);  // space before %c skips whitespace
    } while (choice == 'y' || choice == 'Y');
    printf("Positive: %d, Negative: %d, Zero: %d\n", pos, neg, zero);
    return 0;
}
