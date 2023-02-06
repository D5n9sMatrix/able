# A Beginner's Guide to Gambas
<code>
<b>STATIC PUBLIC SUB</b> Main()<br/>
** DIM '<FONT COLOR=#0000FF>N</font>' AS '<FONT COLOR=#e69900>Integer</font>'<br/>
** DIM '<FONT COLOR=#0000FF>R</font>' AS '<FONT COLOR=#e69900>Integer</font>'<br/>
** '<FONT COLOR=#0000FF>N</font>' = '<FONT COLOR=#FF0000>0</font>'<br/>
** '<FONT COLOR=#0000FF>R</font>' = '<FONT COLOR=#FF0000>0</font>'<br/>
** PRINT "=> ";'<FONT COLOR=#0000FF>N</font> OR <FONT COLOR=#0000FF>R</font>';" is the OR result of ";'<FONT COLOR=#0000FF>N</font>';" OR ";'<FONT COLOR=#0000FF>R</font>'<br/>
** '<FONT COLOR=#0000FF>R</font>' = '<FONT COLOR=#FF0000>1</font>'
** PRINT "=> ";'<FONT COLOR=#0000FF>N</font>' OR '<FONT COLOR=#0000FF>R</font>';" is the OR result of ";'<FONT COLOR=#0000FF>N</font>';" OR ";'<FONT COLOR=#0000FF>R</font>'<br/>
** '<FONT COLOR=#0000FF>N</font>' = '<FONT COLOR=#FF0000>1</font>'
** PRINT "=> ";'<FONT COLOR=#0000FF>N</font>' OR '<FONT COLOR=#0000FF>R</font>';" is the OR result of ";'<FONT COLOR=#0000FF>N</font>';" OR ";'<FONT COLOR=#0000FF>R</font>'<br/>
** END<br/>
</code>

<br/>

> The console window responds with:

<br/>

> => 0 is the OR result of 0 OR 0<br/> 
> => 1 is the OR result of 0 OR 1<br/>
>=> 1 is the OR result of 1 OR 1<br/>

Number XOR Number uses the XOR operator and computes the
mathematical exclusive OR of the binary value of the two numbers.

<br/>

<code>

<b>STATIC PUBLIC SUB</b> Main()<br/>
** DIM '<FONT COLOR=#0000FF>N</font>' AS '<FONT COLOR=#e69900>Integer</font>'<br/>
** DIM '<FONT COLOR=#0000FF>R</font>' AS '<FONT COLOR=#e69900>integer</font>'<br/>
** '<FONT COLOR=#0000FF>N</font>' = '<FONT COLOR=#FF0000>0</font>'<br/>
** '<FONT COLOR=#0000FF>R</font>' = '<FONT COLOR=#FF0000>0</font>'<br/>
** PRINT "=> ";'<FONT COLOR=#0000FF>N</font>' XOR '<FONT COLOR=#0000FF>R</font>';" is the XOR result of "; '<FONT COLOR=#0000FF>N</font>'; " XOR "; '<FONT COLOR=#0000FF>R</font>'<br/>
** <FONT COLOR=#0000FF>R</font> = <FONT COLOR=#FF0000>1</font><br/>
** PRINT "=> ";'<FONT COLOR=#0000FF>N</font>' XOR '<FONT COLOR=#0000FF>R</font>';" is the XOR result of "; '<FONT COLOR=#0000FF>N</font>'; " XOR "; '<FONT COLOR=#0000FF>R</font>'<br/>
** <FONT COLOR=#0000FF>N</font> = <FONT COLOR=#FF0000>1</font><br/>
** PRINT "=> ";'<FONT COLOR=#0000FF>N</font>' XOR '<FONT COLOR=#0000FF>R</font>';" is the XOR result of "; '<FONT COLOR=#0000FF>N</font>'; " XOR "; '<FONT COLOR=#0000FF>R</font>'<br/>
** END<br/>
> 
</code>

<br/>

 The console window responds with:

<br/>

> => 0 is the XOR result of 0 XOR 0<br/>
> => 1 is the XOR result of 0 XOR 1<br/>
> => 0 is the XOR result of 1 XOR 1<br/>

<br/>


Additionally, the following operators manipulate one or more numeric values and
return a numeric value:

<br/>

** DEC | INC | LIKE | NOT
 