// Zaid Lozano
// May 7 2024
// Project 2

// This file contains the class definition of the Variable class. The variable is represented by its
// name, which the construcor initializes. Because this class is a subclass of Operand which in turn is
// a subclass of Expression, it must implement the function evaluate, whose body is defined in variable.cpp.


#include <sstream>
#include <vector>
using namespace std;

// Define the class Variable as a subclass of Operand.
class Variable : public Operand
{
public:
       // Constructor for the Variable class.
       // It initializes the Variable with a given name.
       Variable(string name)
       {
              // Set the internal name of the Variable to the provided name.
              this->name = name;
       }

       // Declaration of the evaluate function.
       // This function is defined elsewhere and is used to evaluate the variable's value.
       double evaluate();

private:
       // Private member to hold the name of the Variable.
       string name;
};