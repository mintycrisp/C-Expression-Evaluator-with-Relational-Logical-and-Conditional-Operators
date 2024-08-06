// Zaid Lozano
// May 7 2024
// Project 2

// This file contains the main function for the project 2 skeleton. It reads an input file named input.txt
// that contains one statement that includes an expression following by a sequence of variable assignments.
// It parses each statement and then evaluates it.

#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <sstream>
using namespace std;
#include "expression.h"
#include "subexpression.h"
#include "symboltable.h"
#include "parse.h"
#include <map>
// Create a global SymbolTable object to store variables and their values.
SymbolTable symbolTable;

// Function prototype for parseAssignments.
void parseAssignments(stringstream& in);

// Define the main function.
int main()
{
       // Declare variables for the expression and input parsing.
       Expression* expression;
       char paren, comma;
       string line;
       // Open a file input stream with the file "input.txt".
       ifstream fin("input.txt");

       // Check if the file opened successfully, if not display an error.
       if (!fin.is_open())
              perror("error while opening file");

       // Read lines from the file and process them.
       while (getline(fin, line))
       {
              // Initialize the symbol table for new line of input.
              symbolTable.init();
              if (!fin)
                     break;
              // Create a stringstream for the line.
              stringstream in(line, ios_base::in);
              // Read the first parenthesis from the input.
              in >> paren;
              cout << line << " ";
              // Parse the expression from the input.
              expression = SubExpression::parse(in);
              // Read the comma after the expression.
              in >> comma;
              // Parse and process the assignments.
              parseAssignments(in);
              // Evaluate the expression and display the result.
              try {
              // Evaluate the expression and display the result.
                     double result = expression->evaluate();
                     cout << "Value = " << result << endl;
              } catch (const std::runtime_error& e) {
                     // Handle the exception for an undeclared variable
                     cerr << "Error evaluating expression: " << e.what() << endl;
                     // Optionally, continue processing further expressions
              }
       }
       // Pause the system before closing.
       system("pause");
       return 0;
}

// Define the function parseAssignments().
// This function processes assignment statements from the input.
void parseAssignments(stringstream& in) {
    char assignop, delimiter;
    string variable;
    double value;
    // Create a temporary map to track variable assignments in the current expression
    map<string, double> tempAssignments;

    do {
        // Parse the variable name.
        variable = parseName(in);
        // Read the assignment operator, value, and delimiter.
        in >> ws >> assignop >> value >> delimiter;

        // Check if the variable has already been assigned a value in this expression
        if (tempAssignments.find(variable) != tempAssignments.end()) {
            // Output an error message indicating a duplicate assignment
            cerr << "Error: Duplicate assignment for variable '" << variable << "' in the same expression." << endl;
        } else {
            // Insert the variable and its value into the symbol table if not a duplicate
            symbolTable.insert(variable, value);
            // Also, track this assignment in tempAssignments
            tempAssignments[variable] = value;
        }
    } while (delimiter == ','); // Continue if there's a comma, indicating more assignments.
}