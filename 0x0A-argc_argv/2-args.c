#include "main.h"
#include <stdio.h>

/**
 *main - printsa a word followed by a new line
 *@argc: argument count
 *@argv: argument vector
 *
 *Return: main returns zero
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}


	return (0);
}

