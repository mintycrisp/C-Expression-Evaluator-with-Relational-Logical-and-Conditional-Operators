// Zaid Lozano
// May 7 2024
// Project 2

// This file contains the definition of the Operand class, which is a subclass of Expression. It is an
// abstract class because it does not implement the evaluate function. It contains one static (class)
// function parse that parses an operand as either a literal or variable.

#ifndef OPERAND_H
#define OPERAND_H



// Define the class Operand as a subclass of the Expression.
class Operand : public Expression
{
public:
       // Declare a static function named parse.
       // This function is used to parse operands from a stringstream.
       // It returns a pointer to an Expression object representing the parsed operand.
       static Expression* parse(stringstream& in);
};
#endif // OPERAND_H