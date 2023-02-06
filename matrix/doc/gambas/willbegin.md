
# A Beginner's Guide to Gambas

## Chapter 2 – Gambas Language

### Concepts

In this chapter, we will begin to learn the basic concepts needed to master
the Gambas programming language. The topics we will cover in this chapter
include learning about Gambas data­types, constants, and variables and how to
declare and assign values to those constants and variables. We will learn about
the basic arithmetic operators, comparison operators, and string operators.
Gambas Variables, Data­types and Constants
Variables must be defined at the beginning of a class, method or function.
Variable declarations can either be local to a procedure or function or they can be
declared global to a class. A global variable is accessible everywhere in the class
it is declared. The format of a global variable declaration in Gambas takes the
following general form:

<br/>

STATIC PUBLIC|PRIVATE Identifier [Array declaration] AS [NEW] Data­type
If the PUBLIC keyword is specified, it is also accessible to the other classes
that have any reference to an object of that class. If the PRIVATE keyword is
specified, it is not accessible outside the class in which it was defined. If the
STATIC keyword is specified, the same variable will be shared with every object
of the class where it is declared. If the NEW keyword is specified, the variable is
initialized with (i.e., instantiated with) a new instance of the class using the data­
type specified. For local variable declarations, the format is like this:

<br/>

> [DIM] Identifier AS Datatype

<br/>


This will declare a local variable in a procedure or function. This variable is
only accessible to the procedure or function where it is declared. An example of
several local declarations is shown below:

-DIM iValue AS INTEGER <br/>
-DIM stMyName AS STRING <br/>
-DIM fMyMatrix[3, 3] AS FLOAT <br/>
-DIM oMyObject AS OBJECT <br/>
