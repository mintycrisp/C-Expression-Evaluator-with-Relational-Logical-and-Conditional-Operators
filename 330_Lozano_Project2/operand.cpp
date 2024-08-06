// Zaid Lozano
// May 7 2024
// Project 2

// This file contains the body of the function parseName contained in the Operand class. That function
// parses the next token. When the next non-whitespace character is a digit, it assumes a literal is next.
// When the next character is a left parenthesis, a recursive call is made to parse the subexpression.
// Otherwise the next token is assumed to a variable. No checks are made to ensure correct syntax.
#include <cctype>
#include <iostream>
#include <list>
#include <string>
using namespace std;
#include "expression.h"
#include "subexpression.h"
#include "operand.h"
#include "variable.h"
#include "literal.h"
#include "parse.h"
#include <sstream>
#include <regex>

bool isPatternMatch(std::istream& in, const std::regex& pattern) {
    std::string peekStr;
    std::streampos originalPos = in.tellg();  // 

    in >> peekStr;  // 
    bool match = std::regex_match(peekStr, pattern);

    in.seekg(originalPos);  // 
    return match;
}

// Define the function parse() for Operand class.
Expression* Operand::parse(stringstream& in)
{
       char paren;
       double value;
       // Skip any leading whitespace.
       in >> ws;

           std::regex pattern("^[a-zA-Z]_[1-9]$");  // 

    if (isPatternMatch(in, pattern)) {
        std::string varName;
        in >> varName;  // 
        return new Variable(varName);  //
    }

       // Check if the next character is a digit, indicating a literal.
       if (isdigit(in.peek())) {
    // Read the first literal value.
    in >> value;

        // Create and return a new Literal expression with only one value.
        Expression* literal = new Literal(value);
        return literal;
    }


       

       // Check if the next character is '(', indicating a subexpression.
       if (in.peek() == '(')
       {
              // Read the '(' character.
              in >> paren;
              // Parse and return the subexpression.
              return SubExpression::parse(in);
       }
       
     
       else
       {
              // If it's not a digit or '(', assume it's a variable and parse it.
              return new Variable(parseName(in));
       }

       // If none of the above, return null (but this point should not be reached).
       return 0;
}