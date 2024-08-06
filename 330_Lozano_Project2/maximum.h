// Zaid Lozano
// May 7 2024
// Project 2

// This file defines the Maximum class, a subclass of SubExpression, for > operations.

// Define the class Maximum as a subclass of SubExpression.
class Maximum : public SubExpression
{
public:
       // Constructor for Maximum, initializing it with left and right expressions.
       // It calls the constructor of SubExpression to set up the operands.
       Maximum(Expression* left, Expression* right) : SubExpression(left, right)
       {
       }

       // Overridden evaluate function to perform >
       // It evaluates if the left value is greater than the right value
       double evaluate()
       {
              // Evaluate left and right expressions and return their product.
              return left->evaluate() > right->evaluate();
       }
};
