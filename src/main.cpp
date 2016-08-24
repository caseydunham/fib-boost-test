
#include "IterativeFib.hpp"

#include <iostream>

int main(int argc, char *argv[]) {
  Fib *f = new IterativeFib();
  
  int res = f->fib(1);
  std::cout << "fib(1) = " << res << std::endl;
  return 0;
}
