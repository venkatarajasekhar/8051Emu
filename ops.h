
#ifndef OPS_H
#define OPS_H

#include "Processor.h"

namespace emu {

    typedef void (*op_func_t)(Processor &p);

    extern const op_func_t ops[];
    extern const size_t op_count;

}

#endif // OPS_H
