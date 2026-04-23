#!/bin/bash

# Compile the test file and the custom my_strcpy implementation
gcc src/tests/test_my_strcpy.c src/strings/strcpy/my_strcpy.c -o test_runner

# Run the compiled executable
./test_runner
