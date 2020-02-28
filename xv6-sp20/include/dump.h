#ifndef _DUMP_H_
#define _DUMP_H_

#include "param.h"

struct dump {
  int frames*; // whether this slot of the process table is in use (1 or 0)
  int numAllocPages;  
};

#endif // _DUMP_H_
