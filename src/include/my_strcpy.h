#pragma once 

/**
 * Copies the string pointed to by src, including the terminating null byte ('\0'),
 * to the buffer pointed to by dest.
 * 
 * @param src  Pointer to the null-terminated string to be copied.
 * @param dest Pointer to the destination array where the content is to be copied.
 */
void my_strcpy(char *src, char *dest);