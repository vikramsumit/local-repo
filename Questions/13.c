// Write a function to print "Hot" or "Cold" depending on the temperature user enters.

#include <stdio.h>

float weather_output()
{
    float temp;

    printf("Enter your temperature:");
    scanf("%f", &temp);
    if (temp < 10)
    {
        printf("Its cold day");
    }

    else if (temp < 20)
    {
        printf("Its little bit cold");
    }
    else if (temp > 20 && temp < 40)
    {
        printf("Its moderate weather");
    }
    else
    {
        printf("Its hot day");
    }
}

int main()
{
    weather_output();
    return 0;
}