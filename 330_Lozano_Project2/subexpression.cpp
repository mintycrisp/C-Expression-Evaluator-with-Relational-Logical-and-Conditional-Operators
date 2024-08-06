// Zaid Lozano
// May 7 2024
// Project 2

// This file contains the body of the functions contained in The SubExpression class, which includes
// the constructor that initializes the left and right subexpressions and the static function parse
// parses the subexpression. Addition and subtraction are the two operators that are implemented. I added the rest.
#include <iostream>
using namespace std;
#include "expression.h"
#include "subexpression.h"
#include "operand.h"
#include "plus.h"
#include "minus.h"
#include "times.h"
#include "divide.h"
#include "minimum.h"
#include "maximum.h"
#include "remainder.h"
#include "exponent.h"
#include "average.h"
#include "Negation.h"
#include "ternaryexpression.h"
#include "quaternaryexpression.h"
#include <sstream>
// stringstream is like a string but you can use it like a stream

// This is where we define the constructor for the SubExpression class
SubExpression::SubExpression(Expression* left, Expression* right)
{
       // Here, we're setting the left and right parts of our expression
       this->left = left;
       this->right = right;
}

SubExpression::SubExpression(Expression* left, Expression* right,Expression* nextright)
{
       // Here, we're setting the left and right parts of our expression
       this->left = left;
       this->right = right;
       this->nextright = nextright;
}
SubExpression::SubExpression(Expression* left, Expression* right,Expression* nextright,Expression* nextnextright)
{
       // Here, we're setting the left and right parts of our expression
       this->left = left;
       this->right = right;
       this->nextright = nextright;
       this->nextnextright = nextnextright;
}


// This is the definition of the parse function for our class
Expression* SubExpression::parse(stringstream& in)
{
       // We need two pointers to Expression, one for the left and one for the right
       Expression* left;
       Expression* right;
       Expression* nextright;
       Expression* nextnextright;
       char operation, paren;
       // Let's read the left part of the expression
       left = Operand::parse(in);
       // Now we read the operation symbol (like + or -)
       in >> operation;
       // Time to read the right part of the expression
       right = Operand::parse(in);
       nextright = Operand::parse(in);
       nextnextright = Operand::parse(in);
       // We also read a parenthesis here, but we're not using it right now
       in >> paren;

       // Depending on the operation, we create a different type of expression
       switch (operation)
       {
       case '+':
              // If it's a plus, we make a Plus object
              return new Plus(left, right);
       case '-':
              // If it's a minus, we make a Minus object
              return new Minus(left, right);
       case '*':
              // If it's a times, we make a Times object
              return new Times(left, right);
       case '<':
       // If it's a times, we make a Times object
              return new Minimum(left, right);
       case '>':
       // If it's a times, we make a Times object
              return new Maximum(left, right);
       case '%':
       // If it's a times, we make a Times object
              return new Remainder(left, right);
       case '^':
       // If it's a times, we make a Times object
              return new Exponent(left, right);
       case '&':
       // If it's a times, we make a Times object
              return new Average(left, right);
       case '/':
              // If it's a divide, we make a Divide object
              return new Divide(left, right);
       case '~':
              // If it's a Negation, we make a Negation object
              return new Negation(left,right);
       case '?':
              // If it's a Negation, we make a Negation object
              return new TernaryExpression(left,right,nextright);
       case '#':
              // If it's a Negation, we make a Negation object
              return new QuaternaryExpression(left,right,nextright,nextnextright);
       }
       // If we get here, something went wrong, so we pause the system
       system("pause");
       return 0;
}