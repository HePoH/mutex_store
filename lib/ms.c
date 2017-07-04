#include "../include/ms.h"

pthread_mutex_t mtx = PTHREAD_MUTEX_INITIALIZER;

int get_rand_int(int range_min, int range_max) {
	if (range_min > range_max) {
		fprintf(stderr, "gen_random(): invalid arguments\n" ); 
		exit(EXIT_FAILURE);
	}

	return range_min+rand()%(range_max-range_min+1);
}

void* cst_func(void* args) {
	int i = 0, ln = 0, tid = 0;
	tid = (int) args;

	pthread_mutex_lock(&mtx);

	//

	pthread_mutex_unlock(&mtx);

        //printf("Pthread[%d]: up gn to %d\n", tid, gn);
	pthread_exit(EXIT_SUCCESS);
}
