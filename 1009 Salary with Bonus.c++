#include <cstdio>

int main()
{
    double salary;
    double value;
    double total;
    char name[100];

    printf("Enter this name: ");
    scanf("%s", &name);

    printf("Enter this value :");
    scanf("%lf", &salary);

    printf("Enter this sa;ary: ");
    scanf("%lf", &value);

    total = salary + value * .15;

    printf("TOTAL = R$ %.2lf", total);

    return 0;
}