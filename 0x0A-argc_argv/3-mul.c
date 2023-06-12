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
	int n1, n2, result;

	n1 = atoi(argv[1]), n2 = atoi(argv[2]);

	if (argc == 3)
	{
		result = n1 * n2;
		printf("%d", result);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
