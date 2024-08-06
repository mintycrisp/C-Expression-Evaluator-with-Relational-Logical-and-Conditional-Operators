// Zaid Lozano
// May 7 2024
// Project 2

// This file defines the Exponent class, a subclass of SubExpression, for ^ operations.

#include <cmath> // Include cmath for std::pow

// Define the class Exponent as a subclass of SubExpression.
class Exponent : public SubExpression
{
public:
       // Constructor for Exponent, initializing it with left and right expressions.
       // It calls the constructor of SubExpression to set up the operands.
       Exponent(Expression* left, Expression* right) : SubExpression(left, right)
       {
       }

       // Overridden evaluate function to perform exponentiation.
       // It uses the right value as the exponent for the left value
       double evaluate()
       {
              // Evaluate left and right expressions and return their product.
              return static_cast<double>(std::pow(left->evaluate(), right->evaluate()));
       }
};
