# TECNOMATE Archive

Repository with statements, tutorials & test cases for [Tecnomate](https://tecnomate.xyz/).

# Run tests
If you are a contestant and want to test your solution please follow these steps:
```sh
git clone https://github.com/JU4N98/tecnomate
cd /tecnomate
bash run.sh path_to_problem path_to_your_solution 
```
The possibles return values are:
```
COMPILATION ERROR: the compilation of your code failed.
WRONG ANSWER / RUNTIME ERROR: some test cases have incorrect output or runtime errors.
ACCEPTED: all test passed. 
```
This script only checks the correctness of your code, you may receive ACCEPTED but it could be TIME LIMIT EXCEEDED during contest.

# Contributing 
Just create a branch from the current tecnomate edition i.e. tecnomate_20XX and add problems with the following structure:
```
tecnomate_20XX
└── problem_name
    ├── solution.cpp
    ├── statement.md
    ├── test_cases
    │   ├── 1.in
    │   └── 1.out
    └── tutorial.md
```
Please check and try to match the format of each of the sample files.
