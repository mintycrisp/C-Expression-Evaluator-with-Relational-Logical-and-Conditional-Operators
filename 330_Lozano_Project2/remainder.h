// Zaid Lozano
// May 7 2024
// Project 2

// This file defines the Remainder class, a subclass of SubExpression, for remainder operations.

// Define the class Remainder as a subclass of SubExpression.
class Remainder : public SubExpression
{
public:
       // Constructor for Remainder, initializing it with left and right expressions.
       // It calls the constructor of SubExpression to set up the operands.
       Remainder(Expression* left, Expression* right) : SubExpression(left, right)
       {
       }

       // Overridden evaluate function to perform %
       double evaluate()
       {
              // Evaluate left and right expressions and return their product.
              return std::fmod(left->evaluate(), right->evaluate());
       }
};
