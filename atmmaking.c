
#include <stdio.h>

int main()
{
    int amount, remaining;
    int n500, n200, n100, n50, n20, n10;
    float fee = 0.0;

    printf("Enter withdrawal amount: Rs. ");
    scanf("%d", &amount);

    if (amount < 100 || amount > 25000 || amount % 10 != 0)
    {
        printf("Invalid withdrawal amount!\n");
        printf("Amount must be Rs. 100 to Rs. 25000\n");
        printf("and must be a multiple of Rs. 10.\n");
        return 0;
    }
    remaining = amount;

    n500 = remaining / 500;
    remaining = remaining % 500;

    n200 = remaining / 200;
    remaining = remaining % 200;

    n100 = remaining / 100;
    remaining = remaining % 100;

    n50 = remaining / 50;
    remaining = remaining % 50;

    n20 = remaining / 20;
    remaining = remaining % 20;

    n10 = remaining / 10;
    remaining = remaining % 10;

    if (amount > 10000)
        fee = amount * 0.025f;

    printf("\n----- ATM TRANSACTION SLIP -----\n");
    printf("Withdrawal Amount : Rs. %d\n", amount);
    printf("Rs. 500 notes     : %d\n", n500);
    printf("Rs. 200 notes     : %d\n", n200);
    printf("Rs. 100 notes     : %d\n", n100);
    printf("Rs. 50 notes      : %d\n", n50);
    printf("Rs. 20 notes      : %d\n", n20);
    printf("Rs. 10 notes      : %d\n", n10);
    printf("Total Cash        : Rs. %d\n", amount);
    printf("Service Fee       : Rs. %.2f\n", fee);
    printf("Total Debit       : Rs. %.2f\n",
           amount + fee);
    printf("-------------------------------\n");

    return 0;
}
