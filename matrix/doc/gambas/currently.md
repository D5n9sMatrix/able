# A Beginner's Guide to Gambas

There are currently nine basic data­types a programmer can use to write
program code in Gambas 10 . These data­types include the following:
<br/>

Boolean                Integer                 String                  <br/>
Byte                        Float                      Variant               <br/>   
Short                      Date                       Object                <br/>

<br/>

Boolean data­types can contain only a single value, either TRUE or
FALSE. TRUE is defined as 1 and FALSE is defined as 0. The declaration of a
Boolean variable occupies 1 byte of memory and the default value is FALSE. An
example of a variable declaration for a Boolean variable looks like this:
<br/>

STATIC PRIVATE bGrid AS Boolean

Typically, a programmer would use a Boolean data­type when the only
values for the variable would be yes/no, TRUE/FALSE, 1/0, etc. If the values
used in your program could be anything else, Boolean would be an inappropriate
selection for the variable data­type. Another thing to note in the variable
declaration above is the placement of the lowercase letter b in from of the
variable name.

<br/>

Good programming convention encourages this practice, known as the
Hungarian Notation 11 , as it allows the programmers to know what data­type the
variable is by simply knowing that the 'b' stands for Boolean. What happens when
a programmer wants to use a Byte data­type instead of a Boolean data­type?
Typically, a second letter is added to the variable declaration so rather than using
'b' in front of the variable name the programmer would use 'by' as below:
<br/>

STATIC PRIVATE bySomething AS Byte

<br/>

The letters 'ar' 's', 'i', 'f', 'd', 'st', 'v' and 'o' are commonly used notations
when declaring variables while programming in Gambas. It is good programming
practice to force yourself to adhere to this technique so that others can pick up
your code and use it without having to search around to find the data­type for
each variable encountered. Some programmers even use more than the first letter
(s) to name their variables. For example, they would code IntMyNumber or
ByteSomething.

<br/>

10 In the second release of Gambas (Gambas2) "Long" and "Single" data types are planned. These data-types are like the C
LONG LONG and FLOAT data types. This is a significant improvement because Gambas2 will provide direct programming
access to the C API and will also support 64 bit platforms.
11 Hungarian Notation (HN) is a naming convention originated by Charles Simonyi of Microsoft. It was first presented in his
thesis and is widely used throughout the source code of the Windows operating system, among other places.
