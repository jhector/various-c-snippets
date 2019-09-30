#include <stdlib.h>

void simple_double_free()
{
	void *ptr = malloc(1);

	free(ptr);

	free(ptr);
}

void cond_double_free()
{
	void *ptr = malloc(1);

	free(ptr);

	if (getenv("FREE_PTR_002")) {
		free(ptr);	
	}
}

void double_free_002()
{
	simple_double_free();
	cond_double_free();
}	
