// Zaid Lozano
// May 7 2024
// Project 2

// This file contains the body of the function parseName. That function consumes all alphanumeric
// characters until the next whitespace and returns the name that those characters form.
#include <cctype>
#include <iostream>
#include <string>
#include <sstream>
using namespace std;
#include "parse.h"

// Define the function parseName().
// This function reads alphanumeric characters from a stringstream and forms a name.
string parseName(stringstream &in)
{
       char alnum;
       // Start with an empty name.
       string name = "";
       // Skip leading whitespace.
       in >> ws;

       // Read characters while they are alphanumeric and append them to the name.
       //english or number
       while (isalnum(in.peek())|| in.peek() == '_')
       {
              // Read the next alphanumeric character.
              in >> alnum;
              // Append the character to the name.
              name += alnum;
       }

       // Return the composed name.
       return name;
}