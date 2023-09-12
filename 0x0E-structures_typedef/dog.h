#ifndef _STRUCT_FILE
#define _STRUCT_FILE

/**
 * struct dog - A c Struct
 * @name: *char type
 * @age : type float
 * @owner: type *char
 *
 * Description: struct named "dog" itwhich stores its name, age and owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - typedef for dog struct
 */
typedef struct dog dog_t;


void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

dog_t *new_dog(char *name, float age, char *owner);

void free_dog(dog_t *d);


#endif
