#ifndef dog_h
#define dog_h
/**
 * struct dog - dog
 * @name: the name of dog
 * @age: float
 * @owner: name of owner
 */
struct dog
{
  char *name;
  float age;
  char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif