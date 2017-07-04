#ifndef PRINT_N_H
#define PRINT_N_H

#include <stdio.h>
#include <stdlib.h>

#include <sys/types.h>
#include <unistd.h>
#include <time.h>

#include <pthread.h>

#define STORE_NUM 5

int* store_value;

int get_rand_int(int range_min, int range_max);
void* cst_func(void* args);

#endif

