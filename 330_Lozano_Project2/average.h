// Zaid Lozano
// May 7 2024
// Project 2

// This file defines the Average class, a subclass of SubExpression, for finding averages operations.

// Define the class Average as a subclass of SubExpression.
class Average : public SubExpression
{
public:
       // Constructor for Average, initializing it with left and right expressions.
       // It calls the constructor of SubExpression to set up the operands.
       Average(Expression* left, Expression* right) : SubExpression(left, right)
       {
       }

       // Overridden evaluate function to find the average of an expression.
       // adds the two values then divides by 2 and returns the average
       double evaluate()
       {
              // Evaluate left and right expressions and return their product.
              return (left->evaluate() + right->evaluate()) / 2;

       }
};
