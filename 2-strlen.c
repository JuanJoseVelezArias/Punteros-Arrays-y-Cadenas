#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 * print_sign - detects lowercase and non-lowercase letters
 *@c The character
 * Return: Always 0.
 */  
 int _strlen(char *s)
 {
    int c = 0;
    while (*s != '\0')
    {
        c++;
        s++;
    }
    return c;
 }