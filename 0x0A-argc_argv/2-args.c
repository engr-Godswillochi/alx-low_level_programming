#include "main.h"

/**
 * main - prints all arguments passed to it
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always zero
 */

int main(int argc, char *argv[])
{
	int count = 0;

	if (argc >= 1)
	{
		for (; count < argc; count++)
		{
			printf("%s\n", argv[count]);
		}
	}
	return (0);
}
