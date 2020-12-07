/* L-1 MCS 360 Monday 13 January 2003 :
 *   simple program to illustrate rational arithmetic
 */

#include <stdio.h>
#include "rational.h"

int main ( void )
{
   rational r1,r2,sum,product;

   printf("Give first rational number : ");
   read(&r1);
   printf("Your rational number : ");
   write(r1); printf("\n");

   printf("Give second rational number : ");
   read(&r2);
   printf("Your rational number : ");
   write(r2); printf("\n");

   sum = add(r1,r2);
   printf("The sum : ");
   write(sum); printf("\n");

   product = mul(r1,r2);
   printf("The product : ");
   write(product); printf("\n");

   return 0;
}