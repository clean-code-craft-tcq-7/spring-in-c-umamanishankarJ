#pragma once

#ifdef __cplusplus
extern "C" {
#endif

struct Stats {
};

struct Stats compute_statistics(const * numbers, int count);

#ifdef __cplusplus
}
#endif