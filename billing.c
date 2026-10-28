
#include <stdio.h>

int main()
{
    int units;
    char type, payment;
    float r1, r2, r3, r4, rent;
    float energy = 0, surcharge = 0;
    float rebate = 0, lateFee = 0, total;

    printf("Enter electricity units: ");
    scanf("%d", &units);

    if (units < 0)
    {
        printf("Error: Negative units are invalid.\n");
        return 0;
    }

    printf("Enter consumer type (D/C): ");
    scanf(" %c", &type);

    switch (type)
    {
        case 'D':
        case 'd':
            r1 = 2.00;
            r2 = 3.50;
            r3 = 5.00;
            r4 = 7.00;
            rent = 60;
            break;

        case 'C':
        case 'c':
            r1 = 4.50;
            r2 = 6.00;
            r3 = 8.00;
            r4 = 10.50;
            rent = 150;
            break;

        default:
            printf("Error: Invalid consumer type.\n");
            return 0;
    }

    /* Progressive slab calculation */
    if (units <= 100)
    {
        energy = units * r1;
    }
    else if (units <= 200)
    {
        energy = 100 * r1
               + (units - 100) * r2;
    }
    else if (units <= 400)
    {
        energy = 100 * r1
               + 100 * r2
               + (units - 200) * r3;
    }
    else
    {
        energy = 100 * r1
               + 100 * r2
               + 200 * r3
               + (units - 400) * r4;
    }

    if (units > 300)
    {
        surcharge = energy * 0.05;
    }

    total = energy + surcharge + rent;

    printf("Enter payment status (E/L): ");
    scanf(" %c", &payment);

    if (payment == 'E' || payment == 'e')
    {
        rebate = total * 0.02;
        total = total - rebate;
    }
    else if (payment == 'L' || payment == 'l')
    {
        lateFee = 50;
        total = total + lateFee;
    }
    else
    {
        printf("Error: Invalid payment status.\n");
        return 0;
    }

    printf("\n--- Electricity Bill ---\n");
    printf("Units consumed: %d\n", units);
    printf("Consumer type: %c\n", type);
    printf("Energy charges: Rs. %.2f\n", energy);
    printf("Green surcharge: Rs. %.2f\n", surcharge);
    printf("Meter rent: Rs. %.2f\n", rent);
    printf("Rebate: Rs. %.2f\n", rebate);
    printf("Late fee: Rs. %.2f\n", lateFee);
    printf("Final bill: Rs. %.2f\n", total);

    return 0;
}
