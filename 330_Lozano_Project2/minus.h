// Zaid Lozano
// May 7 2024
// Project 2

// This file contains the class definition of the Minus class, which is a subclass of SubExpression.


// Define the class Minus, inheriting from SubExpression.
class Minus : public SubExpression
{
public:
       // Constructor for Minus, initializing it with left and right expressions.
       Minus(Expression* left, Expression* right) : SubExpression(left, right)
       {
       }

       // Overridden evaluate function to perform the subtraction operation.
       // It subtracts the value of the right expression from the left one.
       double evaluate()
       {
              // Evaluate the left expression, subtract the value of the right expression, and return the result.
              return left->evaluate() - right->evaluate();
       }
};