// Zaid Lozano
// May 7 2024
// Project 2

// This file contains the body of the functions contained in The SymbolTable class. The insert function
// inserts a new variable symbol and its value into the symbol table and the lookUp function returns
// that value of the supplied variable symbol name.
#include <string>
#include <vector>
using namespace std;
#include "symboltable.h"
#include <stdexcept> // For std::runtime_error


// Inserts a new variable with its value into the symbol table.
void SymbolTable::insert(string variable, double value) {
    // Add a new Symbol (variable and value pair) to the elements vector.
    elements.push_back(Symbol(variable, value));
}

// Looks up and returns the value of a given variable in the symbol table.
double SymbolTable::lookUp(string variable) const {
    // Loop through all elements in the symbol table.
    for (const auto& symbol : elements) {
        // If the variable is found, return its value.
        if (symbol.variable == variable) {
            return symbol.value;
        }
    }
    // If the variable is not found, throw an error.
    throw std::runtime_error("Variable not found: " + variable);
}

// Initializes (or resets) the symbol table by clearing all elements.
void SymbolTable::init() {
    // Clear the vector of symbols, effectively resetting the symbol table.
    elements.clear();
}

