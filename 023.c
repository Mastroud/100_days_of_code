#include <stdio.h>
int main() {
    int days;
    printf("Enter number of late days: ");
    scanf("%d", &days);

    if (days <= 5)
        printf("Fine \u20B9%d\n", days * 2);
    else if (days <= 10)
        printf("Fine \u20B9%d\n", days * 4);
    else if (days <= 30)
        printf("Fine \u20B9%d\n", days * 6);
    else
        printf("Membership Cancelled\n");

    return 0;
}

