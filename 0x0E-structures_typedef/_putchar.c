#include <stdio.h>

/**
* _putchar file 
* always return 0
*
**/
int _putchar (char c)
{
return (write (1, &c, 1));
}
