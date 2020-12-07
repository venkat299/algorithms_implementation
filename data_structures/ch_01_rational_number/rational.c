/* L-1 MCS 360 Monday 13 January 2003
 *   this file contains the definitions of the operations in rational.h
 */

#include "rational.h"
#include <assert.h>       /* to implement precondition */
#include <stdio.h>
#include <stdbool.h>

rational create ( int n, int d )
{
   rational r;

   assert(d != 0);             /* implements precondition */

   r.numerator = n;
   r.denominator = d;

   return r;
}

rational add ( rational r1, rational r2 )
{
   rational r;

   r.denominator = r1.denominator*r2.denominator;
   r.numerator = r1.numerator*r2.denominator
               + r2.numerator*r1.denominator;

   return r;
}

rational mul ( rational r1, rational r2 )
{
   rational r;

   r.numerator = r1.numerator*r2.numerator;
   r.denominator = r1.denominator*r2.denominator;

   return r;
}

bool equal (rational r1, rational r2){
   return false;
}

void read ( rational *r )
{
   int n,d;

   scanf("%d /%d", &n, &d);

   *r = create(n,d);
}

void write ( rational r )
{
   printf("%d/%d",r.numerator,r.denominator);
}
