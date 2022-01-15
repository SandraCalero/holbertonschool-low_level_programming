#ifndef _SEARCHALGOS_H_
#define _SEARCHALGOS_H_

#include <stdio.h>
#include <stdlib.h>

/*Mandatory tasks*/
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);

/*Advanced tasks*/
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
int advanced_binary(int *array, size_t size, int value);

#endif /*_SEARCHALGOS_H_*/
