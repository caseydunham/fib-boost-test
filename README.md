# fib-boost-test
Small example project utilizing Boost::test to test out a recursive and iterative Fibonacci function

Ensure that the boost framework is on your path.

    $ cd fib-boost-test
    $ mkdir build && cd $_
    $ cmake ..
    $ make
    $ ctest

Should report all tests pass. The code creates two test suites, one for the
iterative implementation and one for the recursive implementation.
