# A Beginner's Guide to Gambas
## RETURN [ Expression ]

When Gambas executes the RETURN command, it quits a procedure or a
function and completes its work by returning the value of Expression. Now, enter
the following code after the ' Gambas class file line (note that comments in
Gambas start with the ' [aka the tick mark]) and between the STATIC PUBLIC
SUB Main() and END statements. Once you have entered the code below in the
Gambas code window, click the green ► button from the Project Explorer
ToolBar to execute your program. Here is the code you want to try first:

<br/>

<code>
<b>STATIC PUBLIC SUB</b> Main()                                                      <br/>
**          DIM '<FONT COLOR=#0000FF>N</font>' AS '<FONT COLOR=#e69900>Integer</font>'                                                                           <br/>
**          DIM '<FONT COLOR=#0000FF>R</font>' AS <FONT COLOR=#e69900>Integer</font>                                                                            <br/>
**          '<FONT COLOR=#0000FF>N</font>'  =  '<FONT COLOR=#FF0000>3</font>'                                                                                                       <br/> 
**          '<FONT COLOR=#0000FF>R</font>'  =  '<FONT COLOR=#e69900>6</font>­'                                                                                                        <br/>
** PRINT “===> “;'<FONT COLOR=#0000FF>N</font>';" | ";'<FONT COLOR=#0000FF>R</font>'; " and "; ­'<FONT COLOR=#0000FF>N</font>' ; " | "; '<FONT COLOR=#0000FF>R</font>'­;                           <br/> 
** END                                                                                                          
</code>

<br/>
 
If all goes well (and it should), you will see the blue shrimp (a.k.a., the Gambas
mascot) dance and the console window will respond with the following:

<br/>

> ===> 3 | ­6 and ­6 | 3

<br/>
 
Note that the value of variable N changed from a positive 3 to ­3 and the
value of ­6 changed to a positive value of 6. Don't worry about the syntax of the
PRINT statement or the use of the keyword DIM used to declare our variables for
now. We will cover these keywords later in the book.
To subtract values, use the format Number ­ Number and Gambas will
subtract the second number from the first.

<br/>

<code>
<b>STATIC PUBLIC SUB</b> Main()                                                        <br/>
**            DIM '<FONT COLOR=#0000FF>N</font>' AS '<FONT COLOR=#e69900>Integer</font>'                                                                             <br/> 
**            DIM '<FONT COLOR=#0000FF>R</font>' AS '<FONT COLOR=#e69900>Integer</font>'                                                                              <br/>
**           '<FONT COLOR=#0000FF>N</font>' = '<FONT COLOR=#FF0000>8</font>'                                                                                                         <br/>
**           '<FONT COLOR=#0000FF>R</font>' = '<FONT COLOR=#FF0000>5</font>'	                                                                                                         <br/>    
**     PRINT "===> "; <FONT COLOR=#0000FF>NR</font>;                                                                            <br/>
** END 
</code>  
                                    
<br/> 

The console will respond with the following:                     <br/>

<br/>
> ==> 3                                                       