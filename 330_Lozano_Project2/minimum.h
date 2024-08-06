// Zaid Lozano
// May 7 2024
// Project 2

// This file defines the Minimum class, a subclass of SubExpression, for subtraction operations.

// Define the class Minimum as a subclass of SubExpression.
class Minimum : public SubExpression
{
public:
       // Constructor for Minimum, initializing it with left and right expressions.
       // It calls the constructor of SubExpression to set up the operands.
       Minimum(Expression* left, Expression* right) : SubExpression(left, right)
       {
       }

       // Overridden evaluate function to perform <
       // It evaluates if the left value is less than the right value
       double evaluate()
       {
              // Evaluate left and right expressions and return their product.
              return left->evaluate() < right->evaluate();
       }
};
