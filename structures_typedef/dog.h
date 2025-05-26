#ifndef DOG_H
#define DOG_H

/**
* struct dog - structure that stores dog info
* @name: dog's name
* @age: dog's age
* @owner: dog's owner
* Description: Struct to store name, age, and owner of a dog.
*/
struct dog
{
char *name;
float age;
char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* DOG_H */
