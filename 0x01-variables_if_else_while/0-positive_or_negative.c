#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int n;

    srand(time(0)); // Seed the random number generator

    n = rand() - RAND_MAX / 2; // Generate a random number

    if (n > 0)
    {
        printf(« %d is positive\n », n);
    }
    else if (n < 0)
    {
        printf(« %d is negative\n », n);
    }
    else
    {
        printf(« 0 is zero\n »);
    }

    return (0);
}



















































             

    
       
  












































  








