// Zaid Lozano
// May 7 2024
// Project 2


// This file contains the definition of the Expression class, which is an abstract class that contains one
// abstract (pure virtual) function named evaluate, which must be implemented by all its subclasses.
#ifndef EXPRESSION_H
#define EXPRESSION_H

class Expression
{
public:
       virtual ~Expression() = default;
       virtual double evaluate() = 0;
};

#endif // EXPRESSION_H