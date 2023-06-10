#include <stdio.h>
#include "main.h"

/*
* main - print the number of arguments passed to the program
*@argc: counts the number of argument
*@argv: count the number of array
*Return: Always 0
*
*/

int main(int argc, char *argv[])
{
	(void)argv;/*ignore argv*/
	printf("%d\n", argc - 1);
	return (0);
}
