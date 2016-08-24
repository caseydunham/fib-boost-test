#define BOOST_TEST_MODULE "FibRecursiveTestSuite"
#define BOOST_TEST_DYN_LINK
#include <boost/test/unit_test.hpp>

#include "RecursiveFib.hpp"

BOOST_AUTO_TEST_SUITE(FibRecursiveTestSuite);

BOOST_AUTO_TEST_CASE(test2_fib_0_is_1)
{
  RecursiveFib f;
  BOOST_CHECK_EQUAL(f.fib(0), 1);
}

BOOST_AUTO_TEST_CASE(test2_fib_1_is_1)
{
  RecursiveFib f;
  BOOST_CHECK_EQUAL(f.fib(1), 1);
}

BOOST_AUTO_TEST_SUITE_END();
