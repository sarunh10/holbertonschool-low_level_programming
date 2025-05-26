#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
* new_dog - ينشئ كلب جديد ويعيد مؤشر إليه
* @name: اسم الكلب
* @age: عمر الكلب
* @owner: صاحب الكلب
*
* Return: مؤشر إلى dog_t جديد، أو NULL إذا فشل
*/
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *new;
char *new_name, *new_owner;
new = malloc(sizeof(dog_t));
if (new == NULL)
return (NULL);
new_name = malloc(strlen(name) + 1);
if (new_name == NULL)
{
free(new);
return (NULL);
}
strcpy(new_name, name);
new_owner = malloc(strlen(owner) + 1);
if (new_owner == NULL)
{
free(new_name);
free(new);
return (NULL);
}
strcpy(new_owner, owner);
new->name = new_name;
new->age = age;
new->owner = new_owner;
return (new);
}
