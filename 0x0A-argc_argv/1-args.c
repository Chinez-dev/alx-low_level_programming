#include <stdio.h>
#include "main.h"

/*
*main- prints a program that counts the number
*@argc: counts the number of argument
*@argv: count the number of array
*Return: Always 0
*
*
*/

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
