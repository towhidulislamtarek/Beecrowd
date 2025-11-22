#include <iostream>
using namespace std;

int main()
{
    int number;
    int hours;
    float amount;
    float salary;

    cout << "Enter this number: ";
    cin >> number;

    cout << "Enter this hours: ";
    
    cin >> hours;

    cout << "Enter this amount: ";
    cin >> amount;

    salary = hours * amount;

    cout << "NUMBER = " << number << endl;
    printf("SALARY = U$ %.2f\n",salary);

    return 0;
}