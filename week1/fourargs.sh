#!/bin/bash
g++ fourargs.cpp -o fourargs
./fourargs one two three four five
./fourargs one two three

python fourargs.py one two three four five
python fourargs.py one two three