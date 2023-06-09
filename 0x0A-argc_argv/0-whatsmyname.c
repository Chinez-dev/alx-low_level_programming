#include <stdio.h>
#include "main.h"

/**
*main- program that prints it's name
* and produce the result
*@argc: number of argument
*@argv: number of arrays
* Return: Always 0
*
*/
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
