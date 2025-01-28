// HW #02 Gabriel Cotua
// Tuesday 01/28/2025 
#include <stdio.h>

int main(void) {
    printf("\n\n|#####################|\n");
    printf("|HW #02, Gabriel Cotua|\n");
    printf("|#####################|\n\n");

    // In the U.S. system of volume measurements, 
    // pint is 2 cups, 
    // cup is 8 ounces, 
    // ounce is 2 tablespoons, 
    // tablespoon is 3 teaspoons


    const int pint = 2; // 2 cups
    const int cup = 8; // 8 ounces
    const int ounce = 2; // 2 tablespoons
    const int tablespoon = 3; // 3 teaspoons

    double userCups = 0.0;

    printf("Enter the number of cups to be converted. => ");
    scanf("%lf", &userCups);

    double totalOunces = userCups * cup;
    double totalTablespoons = totalOunces * ounce;
    double totalTeaspoons = totalTablespoons * tablespoon;

    printf("%4.2lf cups = ", userCups);

    printf("%7.2f pints\n", userCups / pint);
    printf("            %7.2f ounces\n", totalOunces);
    printf("            %7.2f tablespoons\n", totalTablespoons);
    printf("            %7.2f teaspoons\n\n", totalTeaspoons);
    
    return 0;
}

/**
 * output:
 * 
 *   |#####################|
 *   |HW #02, Gabriel Cotua|
 *   |#####################|
 *
 *   Enter the number of cups to be converted. => 3.2
 *   3.20 cups =    1.60 pints
 *                 25.60 ounces
 *                 51.20 tablespoons
 *                153.60 teaspoons
 *
 */
