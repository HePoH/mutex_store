#include "../include/ms.h"

#define PTH_N 10

int main() {
	int i = 0, statuses[PTH_N];
	pthread_t tids[PTH_N];

	srand(time(NULL));

	store_value = malloc(STORE_NUM * sizeof(int));
	if (store_value == NULL) {
		perror("malloc");
		exit(EXIT_FAILURE);
	}

	for (i = 0; i < STORE_NUM; i++) {
		store_value[i] = get_rand_int(2800, 3200);
		printf("Store[id = %d]: value = %d\n", i, store_value[i]);
	}

	/*for (i = 0; i < PTH_N; i++)
		pthread_create(&tids[i], NULL, cst_func, (void*) i);

	for (i = 0; i < PTH_N; i++)
		pthread_join(tids[i], (void**)&statuses[i]);*/

	exit(EXIT_SUCCESS);
}
