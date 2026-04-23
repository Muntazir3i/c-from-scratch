#include "../../include/my_strcpy.h"

// Custom implementation of the standard strcmp function
void my_strcpy(char *dest, char *src){
  int i = 0;
  
  // Loop indefinitely until the null terminator is encountered
  while(1){
    // Copy the character from the source string to the destination string
    dest[i] = src[i];
    
    // If the copied character is the null terminator, break out of the loop
    if(src[i] == '\0'){
      break;
    }
    
    // Move to the next character index
    i++;
  }
}