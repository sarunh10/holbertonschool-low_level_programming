#include <stddef.h>  /* needed for NULL */
#include "dog.h"

/**
* init_dog - Initializes a variable of type struct dog
* @d: pointer to struct dog to initialize
* @name: name to set
* @age: age to set
* @owner: owner to set
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
return;
d->name = name;
d->age = age;
d->owner = owner;
}
