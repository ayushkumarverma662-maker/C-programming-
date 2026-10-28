#include <stdio.h>
float convertTemp(float celsius)
{
    return (celsius * 9.0 / 5.0) +32;
}
int main()
{
    float celsius, fahrenheit;

    printf("Enter temperature in celsius");
    scanf("%f", &celsius);
    fahrenheit = convertTemp(celsius);
    printf("Temperature is Fahrenheit = %.2f", fahrenheit);
    return 0;
}
