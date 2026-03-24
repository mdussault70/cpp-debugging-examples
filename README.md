# C++ Debugging Examples

This repository contains simple C++ examples focused on debugging techniques in Linux environments.

It demonstrates how to analyze crashes, understand stack traces, and troubleshoot runtime issues in production-like scenarios.

## Example: Segmentation Fault

### Build
g++ -g main.cpp -o crash_example

### Run
./crash_example

### Debug with gdb
gdb ./crash_example
run
bt

## Purpose

This project reflects practical debugging workflows commonly used when investigating crashes in C++ backend systems.
