# A Beginner's Guide to Gambas

In order to raise a number to a given power (exponent), use the format of
Number ^ Power and Gambas raises Number to the power the Power operator
specified. Try this:
<br/>

<code>
 '<b>STATIC PUBLIC SUB</b>' Main() <br>
 **        DIM '<FONT COLOR=#0000FF>N</font>' AS '<FONT COLOR=#e69900>Integer</font>'<br/> 
 **        DIM '<FONT COLOR=#0000FF>R</font>' AS '<FONT COLOR=#e69900>Integer</font>'<br/>
 **        '<FONT COLOR=#0000FF>N</font>' = '<FONT COLOR=#FF0000>2</font>'<br/>
 **        '<FONT COLOR=#0000FF>R</font>' = '<FONT COLOR=#FF0000>3</font>'<br/>
** PRINT "===> "; '<FONT COLOR=#0000FF>N</font>' ^ '<FONT COLOR=#0000FF>R</font>';<br/>
** END<br/>
<code/>
<br/>
The console will respond with the following:
<br/>
> ==> 8
<br/>
Gambas also has the ability to support logical arithmetic operations 12 .
Using the format of Number AND Number instructs Gambas to use the AND
operator to compute the mathematical AND of the binary values of both of the
numbers. Try this:
<br/>

<code>
'<b>STATIC PUBLIC SUB</b>' Main()<br/>
**      DIM '<FONT COLOR=#0000FF>N</font>' AS '<FONT COLOR=#e69900>Integer</font>'<br/>
**      DIM '<FONT COLOR=#0000FF>R</font>' AS '<FONT COLOR=#e69900>Integer</font>'<br/>
**      '<FONT COLOR=#0000FF>N</font>' = '<FONT COLOR=#FF0000>0</font>'<br/>
**     '<FONT COLOR=#0000FF>R</font>' = '<FONT COLOR=#FF0000>0</font>'<br/>
** PRINT "=> ";  '<FONT COLOR=#0000FF>N</font>' AND '<FONT COLOR=#0000FF>R</font>'; " is the AND result of ";  '<FONT COLOR=#0000FF>N</font>'; " and "; '<FONT COLOR=#0000FF>R</font>'<br/>
**     '<FONT COLOR=#0000FF>R</font>' = '<FONT COLOR=#FF0000>1</font>'<br/>
** PRINT "=> ";  '<FONT COLOR=#0000FF>N</font>' AND  '<FONT COLOR=#0000FF>R</font>'; " is the AND result of ";  '<FONT COLOR=#0000FF>N</font>'; " and "; '<FONT COLOR=#0000FF>R</font>'<br/>
**    '<FONT COLOR=#0000FF>N</font>' = '<FONT COLOR=#FF0000>1</font>'<br/>
** PRINT "=> "; '<FONT COLOR=#0000FF>N</font>'  AND  '<FONT COLOR=#0000FF>R</font>'; " is the AND result of ";  '<FONT COLOR=#0000FF>N</font>'; " and "; '<FONT COLOR=#0000FF>R</font>'<br/>
<br/>
** END<br/>
<code/>
<br/>
The console window responds with:<br/>
<br/>
=> 0 is the AND result of 0 and 0<br/>
=> 0 is the AND result of 0 and 1<br/>
=> 1 is the AND result of 1 and 1<br/>
<br/>
Likewise, Number OR Number used the OR operator and computes the
mathematical OR of the binary value of the two numbers.
12 In Gambas2, it will allow the use of concatenated operators. For example, a += 2 or B /= 4 will work just as if you were
programming in C or C++.