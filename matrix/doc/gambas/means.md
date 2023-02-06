# A Beginner's Guide to Gambas

means that the data can contain any combination of letters and integers or special
characters such as $%^&*. Strings, when declared take four bytes of memory.
This means the maximum size for a string is 4 bytes * 8 bits per byte, or 32 bits
squared (1,024 bytes). String variables default to a NULL value when declared.
Declare a string variable just like you would any other variable:

<br/>

<code>
** STATIC PUBLIC <FONT COLOR=#0000FF>stSomeString</font> AS <FONT COLOR=#e69900>String</font>
</code>

<br/>

The Variant data­type is used when you do not know what kind of data­
type the variable will be receiving. For example, if reading data from a file, you
could read an integer, a string, a single character, floating point numbers, etc. To
ensure the data is placed in a variable without causing a program crash, the
variant data­type is used. You can then test the variant data using some built­in
functions of Gambas to determine the data­type or you can just convert the data
to the data­type you need using a conversion function. We will demonstrate this
later in the book. For now, it is only important that you understand that variant
data­types exist and that they are used when you are not sure of the type of data
the variable will hold.

<br/>

The Object data­type is a special data­type that holds and references
objects such as controls and forms. Later, when we begin to discuss OO
programming, we will cover the use of object data­types in greater detail. The
table shown below is presented as a convenient reference:
Gambas data-types

<br/>

Name Description Memory size Default
Boolean True or False 1 byte FALSE
Byte 0 ... 255 1 byte 0
Short ­32768 ... +32767 2 bytes 0
Integer ­2147483648 ... +2147483647 4 bytes 0
Float Similar to the double data­type in C 8 bytes 0
Date Date/time, each stored in a 4 byte integer. 8 bytes NULL
String A reference to a variable length string. 4 bytes NULL
Variant Can consist of any data­type. 12 bytes NULL
Object An indirect reference to an object. 4 bytes Null
Now that you know about all the different types of data that Gambas
supports, we will start to look at what you can do with those data­types. When
using your variables in Gambas programs, they can be represented by data that
changes (e.g., it is a variable) or they can be represented by data that remains