#include <stdio.h>
#include <pthread.h>

int pthread_create(pthread_t *thread, const pthread_attr_t *attr, 
	void *(*start_routine) (void *), void *arg) __attribute__((weak));

int main() {
	printf("addr: %p\n", pthread_create);

	if (pthread_create) {
		printf("multi-thread ...\n");
	} else {
		printf("single-thread ...\n");
	}
	return 0;
}
