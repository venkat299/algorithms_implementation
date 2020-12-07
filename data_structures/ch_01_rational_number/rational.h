#include <stdbool.h>

typedef struct
{
   int numerator;
   int denominator;
} rational;

rational create ( int n, int d ); 
/* returns the rational number n/d,
 * required: d != 0 */



rational add ( rational r1, rational r2 );
/* returns the sum of two rational numbers r1 and r2 */

rational mul ( rational r1, rational r2 );
/* returns the product of two rational numbers r1 and r2 */

bool equal (rational r1, rational r2);
/* compares two rational number */

void read ( rational *r );
/* reads a rational number from standard input,
 * in the format n/d */

void write ( rational r );
/* writes the rational number to screen */