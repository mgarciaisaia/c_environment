#include <stdlib.h>
#include <stdio.h>

int main(void) {
	char *variable = getenv("MY_VAR");
	printf("MY_VAR: %s\n", variable);
	return 0;
}
