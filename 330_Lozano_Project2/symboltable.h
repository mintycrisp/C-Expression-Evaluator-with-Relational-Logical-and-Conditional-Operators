// Zaid Lozano
// May 7 2024
// Project 2

// This file contains the class definition of the SymbolTable class. The symbol table is represented
// with a vector (list) of type Symbol which is a pair consisting of a variable and its associated value.
// The body of its functions are defined in symboltable.cpp.


class SymbolTable {
public:
    // Insert a variable with its corresponding value into the symbol table.
    void insert(string variable, double value);

    // Look up and return the value of a given variable.
    // Throws an exception if the variable is not found.
    double lookUp(string variable) const;

    // Initialize or reset the symbol table, clearing all stored symbols.
    void init();

private:
    // Nested struct to represent a symbol, which is a variable along with its value.
    struct Symbol {
        string variable; // The name of the variable.
        double value;    // The value of the variable.
        
        // Constructor for the Symbol struct.
        // Initializes a symbol with a given variable name and value.
        Symbol(string variable, double value) : variable(variable), value(value) {}
    };

    // Vector to store all symbols (variables and their values).
    vector<Symbol> elements;
};