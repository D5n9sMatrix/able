# A Beginner's Guide to Gambas

If you use a backslash to divide numbers, i.e., Number \ Number Gambas
computes the quotient of the two numbers. A division by zero error will occur if
the value of the number to the right of the backslash is zero. A \ B is the
equivalent of INT(A/B). To get the remainder, we can use the built­in MOD
function like this:
<br/>

<code>
'<b>STATIC</b> <b>PUBLIC</b> <b>SUB</b> Main()'<br/>
**        DIM '<FONT COLOR=#0000FF>N</font>' AS  '<FONT COLOR=#e69900>Integer</font>' <br/> 
**        DIM <FONT COLOR=#0000FF>R</font>  AS  <FONT COLOR=#e69900>Integer</font> <br/>
**        '<FONT COLOR=#0000FF>N</font>'  =  '<FONT COLOR=#FF0000>9</font>'<br/>
**        '<FONT COLOR=#0000FF>R</font>' =  '<FONT COLOR=#FF0000>5</font>'<br/>
** PRINT "===> "; '<FONT COLOR=#0000FF>N</font>' / '<FONT COLOR=#0000FF>R</font>'; " and the remainder is: ";'<FONT COLOR=#FF0000>9</font>' MOD <FONT COLOR=#FF0000>5</font>;<br/>
** END
<code/> 
<br/>

The console responds with:

<br/>
===> 1 and the remainder is: 4
<br/>

Using Number MOD Number computes the remainder of the quotient of
the two numbers. A division by zero error will occur if the value of the number to
the right of the MOD operator is zero. Finally, we can test the Division by Zero
error by typing this example:
<br/>
<code>
'<b>STATIC</b> <b>PUBLIC</b> <b>SUB</b> Main()'<br/> 
**       DIM '<FONT COLOR=#0000FF>N</font>'  AS '<FONT COLOR=#e69900>Integer</font>'<br/>
**       DIM '<FONT COLOR=#0000FF>R</font>'  AS '<FONT COLOR=#e69900>Integer</font>'<br/>
**       '<FONT COLOR=#0000FF>N</font>' = '<FONT COLOR=#FF0000>9</font>'<br/>'
**       '<FONT COLOR=#0000FF>R</font>' = '<FONT COLOR=#FF0000>0</font>'<br/>
** PRINT "===> ";'<FONT COLOR=#0000FF>N</font>'  / '<FONT COLOR=#0000FF>R</font>';<br/>
<br/>
** END
</code>
<br/>
<br/>
Gambas will respond with the following:
Figure 14­ A Division by Zero Error Dialog.
NOTE: Click the Stop button when you see this dialog appear.
<br/>