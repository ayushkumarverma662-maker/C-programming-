
#include <stdio.h>

int main()
{
    float distance, fuel, mileage;
    float totalDistance = 0, totalFuel = 0;
    float best = 0, worst = 0, average;

    int trips = 0;
    int efficient = 0, inefficient = 0;

    while (1)
    {
        printf("\nEnter distance (-1 to stop): ");
        scanf("%f", &distance);

        if (distance == -1)
        {
            break;
        }

        if (distance < 0)
        {
            printf("Invalid distance! Try again.\n");
            continue;
        }

        printf("Enter fuel consumed: ");
        scanf("%f", &fuel);

        if (fuel <= 0)
        {
            printf("Invalid fuel! Trip skipped.\n");
            continue;
        }

        mileage = distance / fuel;

        totalDistance = totalDistance + distance;
        totalFuel = totalFuel + fuel;
        trips++;

        if (trips == 1)
        {
            best = mileage;
            worst = mileage;
        }
        else
        {
            if (mileage > best)
                best = mileage;

            if (mileage < worst)
                worst = mileage;
        }

        if (mileage >= 15)
            efficient++;

        if (mileage < 10)
            inefficient++;

        printf("Trip mileage = %.2f km/l\n", mileage);
    }

    printf("\n--- Fleet Summary ---\n");

    if (trips == 0)
    {
        printf("No valid trips recorded.\n");
        return 0;
    }

    average = totalDistance / totalFuel;

    printf("Valid trips: %d\n", trips);
    printf("Total distance: %.2f km\n", totalDistance);
    printf("Total fuel: %.2f litres\n", totalFuel);
    printf("Average mileage: %.2f km/l\n", average);
    printf("Best mileage: %.2f km/l\n", best);
    printf("Worst mileage: %.2f km/l\n", worst);
    printf("Fuel-efficient trips: %d\n", efficient);
    printf("Fuel-inefficient trips: %d\n", inefficient);

    return 0;
}
