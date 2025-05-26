#include <stdlib.h>
#include "dog.h"

/**
* _strdup - duplicates a string using malloc
* @s: the string to duplicate
* Return: pointer to the duplicated string, or NULL on failure
*/
char *_strdup(char *s)
{
int i = 0, len = 0;
char *dup;
if (s == NULL)
return (NULL);
while (s[len] != '\0')
len++;
dup = malloc(sizeof(char) * (len + 1));
if (dup == NULL)
return (NULL);
for (i = 0; i < len; i++)
dup[i] = s[i];
dup[i] = '\0';
return (dup);
}
/**
* new_dog - creates a new dog
* @name: name of the dog
* @age: age of the dog
* @owner: owner of the dog
* Return: pointer to the new dog_t, or NULL on failure
*/
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *dog;
dog = malloc(sizeof(dog_t));
if (dog == NULL)
return (NULL);
dog->name = _strdup(name);
if (dog->name == NULL)
{
free(dog);
return (NULL);
}
dog->owner = _strdup(owner);
if (dog->owner == NULL)
{
free(dog->name);
free(dog);
return (NULL);
}
dog->age = age;
return (dog);
}
