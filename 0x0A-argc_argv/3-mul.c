#include "main.h"

/**
 * main - multiplies two numbers
 * @argc: argument count
 * @argv: argument vectort
 *
 * Return: always return zero
 */

int main(int argc, char *argv[])
{
	int n1 = 0, n2 = 0;

	n1 = atoi(argv[1]), n2 = atoi(argv[2]);

	if (argc == 3)
	{
		printf("%d\n", n1 * n2);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
