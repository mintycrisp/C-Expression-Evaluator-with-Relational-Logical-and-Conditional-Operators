# C++ Expression Evaluator with Relational, Logical, and Conditional Operators

## Overview

This project extends a C++ program designed to evaluate expressions from a custom expression language. The original program reads fully parenthesized infix arithmetic expressions and encodes them as binary trees for recursive evaluation. This extension adds support for relational, logical, and conditional operators, enhances input handling, and modifies the evaluation process to return integer results.

## Key Features

### Arithmetic Expression Evaluation

- Supports basic arithmetic operations (`+`, `-`, `*`, `/`).
- Encodes expressions as binary trees for efficient evaluation.
- Variables are assigned values through a symbol table, allowing dynamic expression evaluation.

### Extended Operators

- **Relational Operators**: `<`, `=`.
- **Logical Operators**: `&` (AND), `|` (OR), `!` (NOT).
- **Conditional (Ternary) Operator**: A custom syntax where the third operand represents the condition.
- Logical and relational operators use single-symbol syntax (`&` instead of `&&`), and negation is postfix (`!`).

### Input Handling

- The program is adapted to read input from a file, with multiple expressions arranged one per line.
- This allows batch processing of expressions, enhancing the program's flexibility.

### Integer Arithmetic

- All arithmetic results are changed from `double` to `int`.
- The `evaluate` function and related operations are modified to return and work with integer values.

## Implementation Details

### Classes

- **Minus, Times, and Divide**
  - These classes are implemented to complete the foundational arithmetic operations required by the original program.

- **Extended Operations**
  - Additional classes and methods are introduced to handle relational, logical, and conditional operators, following the extended grammar.

### File Input

- The program processes input from a specified file, evaluating each expression line-by-line.
- This approach supports scalable evaluation of multiple expressions in a single execution.

### Data Type Modifications

- The evaluation process is modified to handle integer arithmetic exclusively, ensuring consistent results in line with the project's requirements.

## Getting Started

### Prerequisites

- A C++ development environment (e.g., GCC, Clang).
- Familiarity with binary trees, expression parsing, and operator overloading in C++.

### Building the Project

1. Clone the repository:
git clone https://github.com/yourusername/expression-evaluator-extension.git

2. Navigate to the project directory:
cd expression-evaluator-extension

3. Compile the project using a C++ compiler:
g++ -o expression_evaluator main.cpp
Running the Program
Prepare an input file with multiple expressions, each on a new line.

4. Run the compiled program:
./expression_evaluator input.txt

Review the output, which will display the evaluation result of each expression.

### Lessons Learned

### Error Handling
- Initially, error handling was basic, catching only simple issues like undeclared variables or duplicate assignments. As the project evolved, refining error messages to provide clear, actionable feedback became crucial, improving both user experience and program robustness.

### Syntax Extensions
- Implementing non-standard syntax for logical and conditional operators required a deep understanding of parsing techniques and careful adjustments to the program's grammar.

### Future Enhancements
- Enhanced Error Messages
- Future versions could further refine error messages to clarify issues and suggest potential fixes.
- Expanded Operator Support
- Adding support for more complex operators and expressions could enhance the program's utility.

- User Interface
- A graphical or command-line interface could be developed to improve user interaction.

### Conclusion
- This project successfully extends the functionality of an expression evaluator in C++, providing support for a wider range of operators, improved input handling, and integer-based arithmetic. It serves as a foundation for further enhancements and a deeper exploration of expression parsing and evaluation in C++.
