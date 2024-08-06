// Zaid Lozano
// May 7 2024
// Project 2

// This file defines the QuaternaryExpression class, a subclass of Expression, for quaternary operations.
#include "expression.h"
#ifndef QUATERNARY_EXPRESSION_H
#define QUATERNARY_EXPRESSION_H



class QuaternaryExpression : public SubExpression
{
public:
       // Constructor for Times, initializing it with left and right expressions.
       // It calls the constructor of SubExpression to set up the operands.
       QuaternaryExpression(Expression* left, Expression* right,Expression* nextright,Expression* nextnextright)  : SubExpression(left, right,nextright,nextnextright)
       {
       }

       
       double evaluate()
       {
              if (left->evaluate() < 0)
{
              // Evaluate left and right expressions and return their product.
            return right->evaluate();

}
             if (left->evaluate() == 0)
{
              // Evaluate left and right expressions and return their product.
            return nextright->evaluate();

}
else{
    return nextnextright->evaluate();    
}
       }
};

#endif // QUATERNARY_EXPRESSION_H



