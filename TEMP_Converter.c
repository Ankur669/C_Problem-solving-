/**
 * Prints a Fahrenheit to Celsius conversion table.
 *
 * This program generates a table of Fahrenheit temperatures and their
 * corresponding Celsius temperatures, ranging from 0°F to 300°F in
 * increments of 20°F.
 *
 * Example output:
 * ```
 * 0       -17
 * 20      -6
 * 40       4
 * 60      15
 * 80      26
 * 100     37
 * 120     48
 * 140     60
 * 160     71
 * 180     82
 * 200     93
 * 220    104
 * 240    115
 * 260    126
 * 280    137
 * 300    148
 * ```
 */
#include<stdio.h>
int main() {
    int fahr, celsius;
    int lower, upper, step;
    lower = 0;
    upper = 300;
    step = 20;
    fahr = lower;
    while (fahr <= upper) {
        celsius = 5 * (fahr - 32) / 9;
        printf("%d\t%d\n", fahr, celsius);
        fahr = fahr + step;
    }
    return 0;  // added return statement to indicate successful execution
}