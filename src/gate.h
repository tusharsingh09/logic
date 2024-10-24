#if !defined(_GATE_H_)
#define _GATE_H_

#include <stdint.h>
#include <stdlib.h>

typedef enum {
    GATE_NOT = 0,
    GATE_BUFFER,
    GATE_OR,
    GATE_AND
} _gate_type;

#include <stdint.h>
#include <raylib.h>

struct _gate;

void _gate_compute(struct _gate*);

void _gate_make   (struct _gate*);

inline
void _gate_free(struct _gate* g){ free(g); }

#endif
