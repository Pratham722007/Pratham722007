#include <stdio.h>

struct Employee {
    int empNumber;
    char empName[100];
    float basicPay;
};

int main() {
    struct Employee employ[50]; 
    int n;

    printf("Enter the number of employees: ");
    scanf("%d", &n);

    
    for (int i = 0; i < n; i++) {
        printf("Enter details for employee %d\n", i + 1);
        printf("Employee Number: ");
        scanf("%d", &employ[i].empNumber);
        printf("Employee Name: ");
        scanf("%s", employ[i].empName);
        printf("Basic Pay: ");
        scanf("%f", &employ[i].basicPay);
    }

    
    printf("\nEmployee Details:\n");
    for (int i = 0; i < n; i++) {
        printf("Employee Number: %d\n", employ[i].empNumber);
        printf("Employee Name: %s\n", employ[i].empName);
        printf("Basic Pay: %.2f\n", employ[i].basicPay);
    }

    return 0;
}
