#ifndef DOG
#define DOG
/**
 * struct dog - a representation of a dog
 * @name: dog's name
 * @owner: dog's owner
 * @age: dog's age
 *
 * Description: Longer description
 */
struct dog
{
	char *name;
	char *owner;
	float age;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

/**
 * dog_t - Typedef for struct dog
 */
typedef struct dog dog_t;

#endif
