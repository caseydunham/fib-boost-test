#define BOOST_TEST_MODULE "FibIterativeTestSuite"
#define BOOST_TEST_DYN_LINK
#include <boost/test/unit_test.hpp>

#include "IterativeFib.hpp"

BOOST_AUTO_TEST_SUITE(FibIterativeTestSuite);

BOOST_AUTO_TEST_CASE(test_fib_0_is_1)
{
  IterativeFib f;
  BOOST_CHECK_EQUAL(f.fib(0), 1);
}

BOOST_AUTO_TEST_CASE(test_fib_1_is_1)
{
  IterativeFib f;
  BOOST_CHECK_EQUAL(f.fib(1), 1);
}

BOOST_AUTO_TEST_SUITE_END();
