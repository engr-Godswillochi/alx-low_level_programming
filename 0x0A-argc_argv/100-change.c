#include "main.h"

/**
 * main - calculates the least number of change 
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: always return zero
 */

int main(int argc, char *argv[])
{
	int n1;
	int result, checker;

	if (argc == 1)
	{
		n1 = atoi(argv[1]);
		if ( n1 <= 0)
			printf("0\n");
		else
		{
			result = n1 / 25;
			checker = (result * 25) - n1;
			if (checker  == 0)
			{
				printf("%d\n", result);
				return (0);
			}

		}
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
