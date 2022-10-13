void print_name(char *name, void (*f)(char *)) is a function that prints a name
void array_iterator(int *array, size_t size, void (*action)(int)) is a function that executes a function given as a parameter on each element of an array.
int int_index(int *array, int size, int (*cmp)(int)) is a function that searches for an integer.
