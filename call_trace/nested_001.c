#include <stdlib.h>
#include <string.h>

void* do_alloc(int len)
{
	return malloc(len);
}

int get_buffer(void **buffer)
{
	if (!buffer) {
		return 0;
	}

	char *env = getenv("CALL_TRACE_001_LEN");
	int len = atoi(env);

	if (env == NULL) {
		*buffer = NULL;
		return 0;	
	}

	*buffer = do_alloc(len);

	return len;
}

void copy_data_001() {
	void *buffer = NULL;

	char *src = getenv("CALL_TRACE_001_SRC");
	int len = get_buffer(&buffer);

	if (buffer && src) {
		memcpy((char*)buffer, src, len);
	}
}
