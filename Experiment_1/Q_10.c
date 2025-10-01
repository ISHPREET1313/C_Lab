#include <stdio.h>
int main()
{
    int year, years_passed, leap_years = 0, total_days, day_index;
    printf("Enter year: ");
    scanf("%d", &year);
    years_passed = year - 1;
    leap_years = (years_passed / 4) - (years_passed / 100) + (years_passed / 400);
    total_days = (years_passed * 365) + leap_years;

    day_index = total_days % 7;
    printf("On 01/01/%d it was ", year);
    switch (day_index){
    case 0:
        printf("Monday\n");
        break;
    case 1:
        printf("Tuesday\n");
        break;
    case 2:
        printf("Wednesday\n");
        break;
    case 3:
        printf("Thursday\n");
        break;
    case 4:
        printf("Friday\n");
        break;
    case 5:
        printf("Saturday\n");
        break;
    case 6:
        printf("Sunday\n");
        break;
    }
    return 0;
}