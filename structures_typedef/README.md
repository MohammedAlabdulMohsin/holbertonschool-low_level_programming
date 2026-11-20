# Structures and `typedef`

This directory contains low-level C programming tasks focused on defining and using `struct` types and `typedef` aliases under `gcc -Wall -Werror -Wextra -pedantic -std=gnu89` and Betty style guidelines.

## Files

| File | Description |
| :--- | :--- |
| `dog.h` | Header file defining `struct dog`, `dog_t`, and function prototypes. |
| `1-init_dog.c` | Function that initializes a `struct dog` variable. |
| `2-print_dog.c` | Function that prints a `struct dog`, handling `NULL` pointers and `NULL` string fields. |
| `4-new_dog.c` | Function that allocates a new `dog_t` and stores copies of `name` and `owner`. |
