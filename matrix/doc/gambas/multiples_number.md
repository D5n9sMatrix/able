# A Beginner's Guide to Gambas

To multiply numbers, we use the format of Number * Number and
Gambas will multiply the two numbers. Here is another console example to try:

<br/>
<code>
'<b>STATIC PUBLIC SUB</b>' Main()<br/>
**     DIM '<FONT COLOR=#0000FF>N</font>'  AS '<FONT COLOR=#e69900>Integer</font><br/>'
**     DIM '<FONT COLOR=#0000FF>R</font>'  AS '<FONT COLOR=#e69900>Integer</font><br/>'  
**     '<FONT COLOR=#0000FF>N</font>'  =  '<FONT COLOR=#FF0000>8</font>'<br/> 
**     '<FONT COLOR=#0000FF>R</font>'  =  '<FONT COLOR=#FF0000>5</font>'<br/>
**PRINT "===> "; '<FONT COLOR=#0000FF>N</font>' * '<FONT COLOR=#0000FF>R</font>';<br/> 
** END
<code>

<br/>

The console will respond with the following:

<br/>

>  ==> 40

<br/>

Division is no different than multiplication. Use the format of Number /
Number to have Gambas divide two numbers. A division by zero error will occur
if the value of the number to the right of the slash is zero. Try this console
example:

 <br/>
<code>
<b>STATIC PUBLIC SUB</b> Main()<br/>
**           DIM '<FONT COLOR=#0000FF>N</font>'  AS  '<FONT COLOR=#e69900>Integer</font>'<br/>
**           DIM '<FONT COLOR=#0000FF>R</font>'  AS  '<FONT COLOR=#e69900>Integer</font>'<br/>
**           '<FONT COLOR=#0000FF>N</font>' = '<FONT COLOR=#FF0000>9</font>'<br/>
**           '<FONT COLOR=#0000FF>R</font>' =  '<FONT COLOR=#FF0000>3</font>'<br/>
** PRINT "===> "; '<FONT COLOR=#0000FF>N</font>'  /  '<FONT COLOR=#0000FF>R</font>';<br/>
** END
</code>
<br/>

The console will respond with the following:

> ==> 3

<br/>

Now try using the \ to divide instead of the / character:

<br/>
<code>
'<b>STATIC PUBLIC SUB</b>' Main()<br/>
**         DIM '<FONT COLOR=#0000FF>N</font>'  AS  '<FONT COLOR=#e69900>Integer</font>'<br/>
**         DIM '<FONT COLOR=#0000FF>R</font>'  AS  '<FONT COLOR=#e69900>Integer</font>'<br/>
**         '<FONT COLOR=#0000FF>N</font>'  =  '<FONT COLOR=#FF0000>9</font>'<br/>
**         '<FONT COLOR=#0000FF>R</font>'  =  '<FONT COLOR=#FF0000>5</font> <br/>
** PRINT "===> "; '<FONT COLOR=#0000FF>N</font>'  \  '<FONT COLOR=#FF0000>R</font>';<br/> 
** END
</code>

<br/>

The console will respond with the quotient:

<br/>

> ==> 1