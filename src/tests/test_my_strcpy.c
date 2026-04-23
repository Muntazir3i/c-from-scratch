#include "../include/my_strcpy.h"
#include <stdio.h>

// main func to test our custom my_strcpy behavior
int main(){
    // Initialize the source string
    char src[] = "Muntazir";
    
    // Allocate space for the destination buffer space
    char dest[10];
    
    // Execute our custom strcpy function
    my_strcpy(src, dest);
    
    // Print the destination string to verify the copy operation succeeded
    printf("%s\n", dest);
    
    return 0;
}

