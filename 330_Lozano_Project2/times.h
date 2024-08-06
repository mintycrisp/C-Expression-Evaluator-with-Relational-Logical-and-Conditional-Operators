// Zaid Lozano
// May 7 2024
// Project 2

// This file defines the Times class, a subclass of SubExpression, for multiplication operations.

// Define the class Times as a subclass of SubExpression.
class Times : public SubExpression
{
public:
       // Constructor for Times, initializing it with left and right expressions.
       // It calls the constructor of SubExpression to set up the operands.
       Times(Expression* left, Expression* right) : SubExpression(left, right)
       {
       }

       // Overridden evaluate function to perform multiplication.
       // It multiplies the value of the left expression with the value of the right expression.
       double evaluate()
       {
              // Evaluate left and right expressions and return their product.
              return left->evaluate() * right->evaluate();
       }
};
