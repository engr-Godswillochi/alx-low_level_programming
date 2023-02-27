#include <stdio.h> 
#include "main.h"

/**
 *print_array-print n-elements of an array 
 * @a: Array of integers 
 *@n: number of elements in the array
 *return - void
 */

void print_array(int *a, int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
		printf("%d", a[j]);

		if (j != (n - 1))
		{
			printf(", ");
		}
	}

	printf("\n");
}
