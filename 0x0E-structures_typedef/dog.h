#ifndef _dog_h_
#define _dog_h_

/**
 * struct dog - structure for dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 */

struct dog
{
	char *name;
	char *owner;
	float age;
}; dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);



#endif /* _dog_h_ */
