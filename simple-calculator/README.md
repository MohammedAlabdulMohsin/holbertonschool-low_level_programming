C - Simple Calculator

Description

A terminal-based interactive calculator written in C. The program allows users to perform basic arithmetic operations through a menu.

Compilation

Compile using:

gcc -Wall -Werror -Wextra -pedantic -std=gnu89 calculator.c -o calculator

Run Instructions

Run the compiled program:

./calculator

Supported Operations

* Addition (+)
* Subtraction (-)
* Multiplication (*)
* Division (/)
* Quit (0)

Numeric Behavior

The calculator uses numeric input. The numeric type (integer or decimal) depends on the implementation.

Known Limitations

* Non-numeric input validation is outside the mandatory project scope.
* Division by zero must be handled.
* Only standard C libraries are used.
