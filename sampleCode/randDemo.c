#include <stdio.h>
#include <stdlib.h>
#include <time.h>


// rand() generates psudo random number between 0 and RAND_MAX.
// RAND_MAX is a constant whose default value may vary between implementations
// but it is granted to be at least 32767.
int main()
{
   int i, n;
   
   n = 5;
   
   /* Intializes random number generator */
   //seeds the random number generator used by the function rand.
   srand(time(NULL));

   /* Print 5 random numbers from 0 to 49 */
   for( i = 0 ; i < n ; i++ ) {
      printf("%d\n", rand() % 50);
   }
   
  return(0);
}
