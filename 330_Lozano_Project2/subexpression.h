// Zaid Lozano
// May 7 2024
// Project 2

// This file contains the class definition of the SubExpression class, which is a subclass of Expression.
// Because it does not implement the abstract function evalauate, it is an abstract class. SubExpression
// objects are represented with the left and right subexpressions. The body of its constructor and the
// static (class) function parse are defined in subexpression.cpp.


// Define the class SubExpression as a subclass of the Expression.
class SubExpression : public Expression
{
public:
       // Constructor for SubExpression. It takes two Expressions: left and right.
       // These represent the two sides of a binary operation.
       SubExpression(Expression* left, Expression* right);
       SubExpression(Expression* left, Expression* right, Expression* nextright);
       SubExpression(Expression* left, Expression* right, Expression* nextright, Expression* nextnextright);

       // Declare a static function named parse.
       // This function is used to parse subexpressions from a stringstream.
       // It returns a pointer to an Expression object representing the parsed subexpression.
       static Expression* parse(stringstream& in);

protected:
       // Declare pointers to left and right Expressions.
       // These are the operands for the binary operation represented by this SubExpression.
       Expression* left;
       Expression* right;
       Expression* nextright;
       Expression* nextnextright;
};