#include <stdlib.h>

int main(void) {
	execve("callee", NULL, NULL);
	return 0;
}
