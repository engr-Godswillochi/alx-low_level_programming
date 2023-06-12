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
	int result = 0, checker, result2;

	if (argc == 2)
	{
		n1 = atoi(argv[1]);
		if ( n1 <= 0)
			printf("0\n");
		else
		{
			if ((n1 / 25) >= 1)
			{
				result = n1 / 25;
				checker = n1 - (result * 25);
				
				if (checker == 0)
				{
					printf("%d\n", result);
					return(0);
				}
			
				n1 = checker;
			}

			
			if ((n1 / 10) >= 1)
			{
				result2 = n1 / 10;
				checker =  n1 - (result2 * 10);
				result += result2;
				if (checker == 0)
				{
					printf("%d\n", result);
					return (0);
				}
				n1 = checker;
			}

			if ((n1 / 5) >= 1)
			{
				result2 = n1 / 5;
				checker =  n1 - (result2 * 5);
				result += result2;
				if (checker == 0)
				{
					printf("%d\n", result);
					return (0);
				}
				n1 = checker;
			}

			if ((n1 / 2) >= 1)
			{
				result2 = n1 / 2;
				checker =  n1 - (result2 * 2);
				result += result2;
				if (checker == 0)
				{
					printf("%d\n", result);
					return (0);
				}
				n1 = checker;
			}

			if ((n1 / 1) >= 1)
			{
				result2 = n1 / 1;
				checker =  n1 - (result2 * 1);
				result += result2;
				if (checker == 0)
				{
					printf("%d\n", result);
					return (0);
				}
				n1 = checker;
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
