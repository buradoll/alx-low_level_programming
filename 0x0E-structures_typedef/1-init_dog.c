#include "dog.h"
#include <stdio.h>
void init_dog(struct dog *d, char *name, float age, char *owner);
/**
 * init_dog - check the code
 *@d parameter.
 *@name parameter.
 *@age parameter.
 *@owner parameter.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
d->name = name;
d->age = age;
d->owner = owner;
}
