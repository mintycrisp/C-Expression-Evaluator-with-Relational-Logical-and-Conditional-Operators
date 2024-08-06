// Zaid Lozano
// May 7 2024
// Project 2

//This file contains the implementation of the Ternary Expression class for handling
//ternary expressions

#ifndef TERNARY_EXPRESSION_H
#define TERNARY_EXPRESSION_H

// Define the class Times as a subclass of SubExpression.
class TernaryExpression : public SubExpression
{
public:
       // Constructor for Times, initializing it with left and right expressions.
       // It calls the constructor of SubExpression to set up the operands.
       TernaryExpression(Expression* left, Expression* right,Expression* nextright)  : SubExpression(left, right,nextright)
       {
       }

       double evaluate()
       {
              if (left->evaluate() == 0)
{
              // Evaluate left and right expressions and return their product.
            return right->evaluate();

}
else{
    return nextright->evaluate();    
}
       }
};
#endif // TERNARY_EXPRESSION_H
