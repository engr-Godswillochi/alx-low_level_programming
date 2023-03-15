#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *main - prints the sum of positive numbers
 *@argc: argument count
 *@argv: argument vector
 *
 *Return: main returns zero
 */

int main(int argc, char *argv[])
{
	int a;
	unsigned int k, sum = 0;
	char *e;

	if (argc > 1)
	{
		for (a = 1; a < argc; a++)
		{
			e = argv[a];

			for (k = 0; k < strlen(e); k++)
			{
				if (e[k] < 48 || e[k] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}

			sum += atoi(e);
			e++;
		}

		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}

	return (0);
}

