#ifndef __RECURSIVE_FIB_H__
#define __RECURSIVE_FIB_H__

#include "Fib.hpp"

class RecursiveFib : public Fib {
public:
  int fib(int n);
};

#endif // __RECURSIVE_FIB_H__