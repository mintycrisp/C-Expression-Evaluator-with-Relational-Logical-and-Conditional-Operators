// Zaid Lozano
// May 7 2024
// Project 2

// This file contains the definition of the Literal class, whose representation consists of the value
// of the literal. Because both of its functions are one line functions, they are implemented as inline
// functions. The constructor saves the value of the literal. Because this class is a subclass of Operand
// which in turn is a subclass of Expression, it must implement the function evaluate, which returns the
// value that corresponds to the literal.


// Define the class Literal as a subclass of the Operand.
class Literal : public Operand
{
public:
       // Constructor for Literal. It initializes the Literal with a given value.
       Literal(double value)
       {
              // Set the internal value of the Literal to the provided value.
              this->value = value;
       }

       // This function evaluates the Literal and returns its value.
       // In this case, it simply returns the literal value itself.
       double evaluate()
       {
              return value;
       }


private:
       // Private member to hold the value of the Literal.
       double value;
};