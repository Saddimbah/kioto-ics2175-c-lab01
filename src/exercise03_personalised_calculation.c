/*
 * ICS 2175 - Introduction to Computer Programming
 * Laboratory 01 - Exercise 03: Personalised Calculation
 *
 * Student Name: SADDIMBAH PHAIZARD BRACKSTONE
 * Registration Number: ENB211-0060/2025
 * Variant ID: V07
 * Scenario: A LEARNER CALCULATES THE DISTANCE TRAVELLED OVER A FIXED DURATION
 *
 * Instructions:
 *   - Record your assigned variant details above.
 *   - Use the two input values given for your variant.
 *   - Perform the required arithmetic operation.
 *   - Store the result in a meaningfully named variable.
 *   - Print the result using the required output label.
 */

#include <stdio.h>

int main(void)
{
     int averageSpeed = 192;
    float timeHours = 1.5f;
    float distanceTravelled;
    char category = 'A';

    distanceTravelled = averageSpeed * timeHours;

    printf("Average Speed: %d km/h\n", averageSpeed);
    printf("Time: %.1f hours\n", timeHours);
    printf("Category: %c\n", category);
    printf("Distance Travelled: %.1f km\n", distanceTravelled);

    printf("The vehicle travelled %.1f km in %.1f hours.\n",
           distanceTravelled, timeHours);

    return 0;
}
