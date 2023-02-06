# A Beginner's Guide to Gambas

constant throughout the program. This type of data is known as a Constant in
Gambas. Gambas constants is used to represent a NULL object reference, a zero
length string, a NULL date, or an uninitialized variant. Examples of constants
include the values NULL, TRUE and FALSE. To declare a constant in Gambas use
the following format:
<br/>
( PUBLIC | PRIVATE ) CONST Identifier AS Datatype = value
This declares a class global constant.
This constant is accessible
everywhere in the class it is declared. If the PUBLIC keyword is specified, it is
also accessible to the other classes having a reference to an object of this class.
Constant values must be Boolean, integers, floating point or string data­types.
Here are some examples of constant declarations:
<br/>
PUBLIC CONST MAX_FILE AS Integer = 30
PRIVATE CONST MAGIC_HEADER AS String = "# Gambas form file"
The built­in constants you would use in Gambas are listed in the table below:
<br/>
Gambas Constants
Constant Example
The TRUE value. TRUE
The FALSE value. FALSE
Integer numbers. 0, 562, 17, ­32769
Hexadecimal short signed integers. &H100F3, &HF0FF, &FFFF
Hexadecimal signed integers. &H1ABF332E, &1CBF302E
Hexadecimal unsigned integers. &H80A0&, &HFCFF&
Binary integers. &X1010111101, %101000011
Floating point numbers. 1.1110, ­5.3419E+4
String constants. "Hello, Gambas World!"
String constants to be translated. ("This is very, very cool")
NULL constant / void string. NULL