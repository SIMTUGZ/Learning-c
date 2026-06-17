// In C, pseudo-random numbers are generated using deterministic
// algorithms that simulate randomness. The most common functions 
// for this are rand() and srand() from <stdlib.h>.

#include <stdio.h>
#include <stdlib.h> // Required for rand() and srand()
#include <time.h>   // Required for time()

int main(){

    //this is use to make the random number work
    srand(time(0)); //seed random number

    // minimum and maximum number limits that you want the program to random generate
    int min = 1 , max = 6;
    int random = rand() % (max - min + 1) + min; // random formula with limits
    
    
    printf("%d \n",rand()); // random seed generation
    printf("%d \n",RAND_MAX); //Maximum Rand generation
    printf("%d \n",random);
    
    return 0;
}

//More Advance 
//Mersenne Twister and /dev/random 
