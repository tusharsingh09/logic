#include "gate.h"

struct _gate {
    struct _gate *in1, *in2;
    uint8_t _in1, _in2;
    uint8_t out;
    _gate_type type;
};

void _gate_make(struct _gate *g){
    g = (struct _gate*)malloc((sizeof(struct _gate)));
}

void _gate_compute(struct _gate *g){
    switch(g->type){

    }
}
