// Zaid Lozano
// May 7 2024
// Project 2

// This file defines a subclass of SubExpression to handle division operations.

//define the class Minus subclass of the SubExpression
class Divide : public SubExpression
{
public:
       //define the default construtor
       Divide(Expression* left, Expression* right) : SubExpression(left, right)
       {
       }
       //define the function evaluate()
       double evaluate()
       {
              //divide the value of left and value of the right
              //and return the value.
              return left->evaluate() / right->evaluate();
       }
};