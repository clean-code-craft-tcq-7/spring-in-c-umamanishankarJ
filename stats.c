#include "stats.h"
#include <math.h>   // for NAN

struct Stats compute_statistics(const float *numbers, int count) {
    struct Stats result;

    if (count == 0 || numbers == NULL) {
        result.average = NAN;
        result.min = NAN;
        result.max = NAN;
        return result;
    }

    float sum = 0.0f;
    float min = numbers[0];
    float max = numbers[0];

    for (int i = 0; i < count; ++i) {
        float val = numbers[i];
        sum += val;
        if (val < min) min = val;
        if (val > max) max = val;
    }
