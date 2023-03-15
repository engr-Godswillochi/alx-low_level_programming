#include "main.h"
#include <stdio.h>

/**
 *main - prints the product of two numbers
 *@argc: argument count
 *@argv: argument vector
 *
 *Return: main returns zero
 */

int main(int argc, char *argv[])
{
	int a = argv[0], b = argv[1], c = a * b;

	if (argv[] == NULL)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", c);
	}
}
