#include <stdio.h>
int main() {
    char id[10];       
    int hour;        
    double value, salary;
    printf(" Enter the Employees : ");
    scanf("%s", &id);

    printf("\n Enter the working hrs: ");
    scanf("%d", &hour);

    printf("\n Enter your amount/hr: ");
    scanf("%lf", &value);

    salary = value * hour;
    printf("\nEmployees ID = %s\nSalary = U$ %.2lf\n", id, salary);
}

