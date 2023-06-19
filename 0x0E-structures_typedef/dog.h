#ifndef _HEADER_
#define _HEADER_

#include <stdio.h>
#include <stdlib.h>

/**
 * struct dog - ...
 * @name: name of dog
 * @age: age of dog
 * @owner: name of owner
 *
 * Description: ...
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
