#include "dog.h"

/**
 * init_dog - initializes a structure
 * @d: ...
 * @name: name of dog
 * @age: dog's age
 * @owner: dog's owner
 *
 * return: returns nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog d;

	d.name = "Godswill";
	d.age = 4.5;
	d.owner = "Henry";

}
