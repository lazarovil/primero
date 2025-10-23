#include <stdio.h>

// Primero programa.
// This function receives an integer `n` and returns the result of adding
// the number to itself (i.e. doubling the value).
int double_number(int n) {
    // Add n to itself and return the sum
    return n + n;
}

// The program's entry point: reads a number from the user, doubles it,
// and prints the result.
int main(void) {
    int x; 
    printf("Enter an integer: ");
    if (scanf("%d", &x) != 1) {
        
        fprintf(stderr, "Invalid input\n");
        return 1;
    }

   
    int result = double_number(x);
    printf("%d doubled is %d\n", x, result);


   
    
    while (result > 0 && result < 25 ) {
        result = result + result;
        printf("your result is %d\n", result);               
    }

    return 0;

}
