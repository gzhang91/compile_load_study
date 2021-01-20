#include <stdio.h>

__attribute__((weak)) void func();

int main() {
	if (func) {
		func();
	} else {
		printf("func addr is: %p\n", func);
	}

	return 0;
}
