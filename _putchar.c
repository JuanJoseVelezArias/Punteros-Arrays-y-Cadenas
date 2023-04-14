#include <unistd.h>
/*
* _putchar - sfhdj
* @c - character 
* return init
*/
int _putchar(char c){
    return(write(1, &c, 1));
}   
