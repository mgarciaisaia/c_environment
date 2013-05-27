#include <stdlib.h>

extern char **environ;

int main(void) {
	execve("callee", NULL, environ);
	return 0;
}
