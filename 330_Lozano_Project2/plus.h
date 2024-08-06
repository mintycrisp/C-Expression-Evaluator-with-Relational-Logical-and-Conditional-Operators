// Zaid Lozano
// May 7 2024
// Project 2

// This file contains the class definition of the Plus class, which is a subclass of SubExpression,


// Define the class Plus as a subclass of SubExpression.
class Plus: public SubExpression
{
public:
       // Constructor for Plus, initializing it with left and right expressions.
       // It calls the constructor of SubExpression to set up the operands.
    Plus(Expression* left, Expression* right): SubExpression(left, right)
    {
    }

       // Overridden evaluate function to perform addition.
       // It adds the value of the left expression to the value of the right expression.
    double evaluate()
    {
              // Evaluate left and right expressions and return their sum.
       return left->evaluate() + right->evaluate();
    }
};