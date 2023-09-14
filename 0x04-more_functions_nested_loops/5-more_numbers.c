#include "main.h"

/**
 *  more_numbers- Prints the numbers from 0 to 14.
 *
 * Description: This function prints the numbers 0 to 14.
 * It does not take any parameters and does not return a value.
 */

void more_numbers(void) {
    // Prints the numbers from 0 to 14.
    int i, j;

    for (i = 0; i <= 14; i++)
        for (j = 0; j <= 14; j++) {
            if (i >= 10) {
                _putchar((i / 10) + '0');
            }
            _putchar((i % 10) + '0');
        }
        _putchar('\n');
    }

