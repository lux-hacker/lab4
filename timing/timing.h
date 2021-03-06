#ifndef LAB4_TIMING_H
#define LAB4_TIMING_H

#include "stdio.h"
#include "../log/log.h"
#include "../randomize/randomize.h"
#include "time.h"
#include "../update/sorts.h"
#include "../interface/input.h"

double getAverage(int, int, void*(*)(void*, size_t, size_t, int(*)(const void*, const void*)), int);
void timingOne(int, void*(*)(void*, size_t, size_t, int(*)(const void*, const void*)), char*, int);
void timing();

#endif //LAB4_TIMING_H
