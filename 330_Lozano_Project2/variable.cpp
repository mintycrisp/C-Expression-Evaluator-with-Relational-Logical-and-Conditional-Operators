// Zaid Lozano
// May 7 2024
// Project 2


// This file contains the body of the function contained in The Variable class. The evaluate function
// looks up te value of a variable in the symbol table and returns that value.
#include <sstream>
#include <vector>
using namespace std;
#include "expression.h"
#include "operand.h"
#include "variable.h"
#include "symboltable.h"

// Use the external object symbolTable declared elsewhere.
extern SymbolTable symbolTable;

// Define the evaluate function for the Variable class.
double Variable::evaluate()
{
       // Look up the value of the variable by its name in the symbol table.
       // The value is returned from the symbol table if the variable is found.
       // If the variable is not found, an exception is thrown from symbolTable.lookUp.
       return symbolTable.lookUp(name);
}