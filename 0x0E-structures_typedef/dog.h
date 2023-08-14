#ifndef dog_h
#define dog_h
/**
 * struct dog - dog structure
 * @name: name of dog
 * @age: age of dog
 * @owner: dog's owner
 */
struct dog
{
	char *name;
	double age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
