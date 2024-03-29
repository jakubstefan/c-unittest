# Readme

Very simple example on how to setup unit testing for a C project using [CUnit](http://cunit.sourceforge.net/).

It consists of a single function `sum`, which is tested in the `test_sum` test.

To run it:

1. `mkdir build`
2. `cd build`
3. `cmake ..`
4. `make`
5. `./unit_tests`

```
     CUnit - A unit testing framework for C - Version 2.1-3
     http://cunit.sourceforge.net/


Suite: MyCode Tests
  Test: test_sum ...passed

Run Summary:    Type  Total    Ran Passed Failed Inactive
              suites      1      1    n/a      0        0
               tests      1      1      1      0        0
             asserts      3      3      3      0      n/a

Elapsed time =    0.000 seconds
```
