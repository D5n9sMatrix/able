# A Beginner's Guide to Gambas
is used. The expression will begin with dot notation, i.e., .Text could be used.
WITH assigns the dotted expression on the left of the equal sign the value found
on the right side of the equal sign. Expression must be an object. Here is a
sample of how the WITH structure looks:
<br/>

<code>
'<b>WITH</b>' '<FONT COLOR=#0000FF>Expression</font>'                                                <br/>
.'<FONT COLOR=#e69900>Object</font>' = '<FONT COLOR=#8000FF>“something”</font>';.                                   <br/>
**END WITH                                                               <br/>
</code>

<br/>

As an example, the code below is code equivalent to hButton.Text = "Exit"

<br/>

<code>
'<b>WITH</b>' '<FONT COLOR=#0000FF>hButton</font>'                                                        <br/>  
.'<FONT COLOR=#e69900>Text</font>' = '<FONT COLOR=#8000FF>"Exit"</font>'                                                           <br/>
**END WITH                                                                <br/>
</code>
<br/>

Operators and Expressions
Now that we know how to declare variables and constants and how to
assign values to these variables and constants, lets take a look at the operations
that can be performed with them. We will begin with comparison operators then
take a look at arithmetic operators and string operators.
Comparison operators
Comparison of two variables requires finding answers to questions like
“does x equal y” or “is a less than b”. The following comparisons are supported in
Gambas:
<br/>

Operator Meaning Example                                             <br/>  
= Is equal to IF a = b THEN ...                                              <br/>
<> Is not equal IF a <> c THEN ...                                       <br/>
< Is less than IF a < d THEN ...                                              <br/>
> Is greater than IF a > e THEN ...                                      <br/>
<= Is less than or equal to IF a <= f THEN ...                <br/>
>= Is greater than or equal to IF a >= g THEN ...        <br/>
Arithmetic Operators                                                             <br/>
<br/>

All of the basic arithmetic operations are supported in Gambas. These