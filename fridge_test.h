/* fridge_test.h
 * 
 * Test driver for fridge kkv.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include <errno.h>
#include <pthread.h>
#include <sys/types.h>
#include <sys/syscall.h>
#include <unistd.h> 
#include <fridge.h>

//#define VERBOSE

#define MAX_KEY_SIZE 200

extern int errno;

void simple_sequential(void);
void hot_potato(int nthreads);
void randomized(int nthreads, int npairs, int iterations, int no_tests);

