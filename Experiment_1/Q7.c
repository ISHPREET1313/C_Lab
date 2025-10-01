#include <stdio.h>

int main() {
    int a, b, c;
    printf("Enter three sides of the triangle: ");
    scanf("%d %d %d", &a, &b, &c);
    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        printf("Triangle is valid\n");
        if (a == b && b == c) {
            printf("Equilateral Triangle\n");
        }
        else if (a == b || b == c || a == c) {
            printf("Isosceles Triangle\n");
        }
        else if ((a * a == b * b + c * c) || (b * b == a * a + c * c) || (c * c == a * a + b * b)) {
            printf("Right-Angled Triangle\n");
        }
        else {
            printf("Scalene Triangle\n");
        }
    } else {
        printf("Triangle is not valid\n");
    }

    return 0;
}
