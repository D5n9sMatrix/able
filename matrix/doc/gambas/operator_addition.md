# A Beginner's Guide to Gambas

operators include addition, subtraction, multiplication, and division.
The
standard symbols for these operations are '+', '­', '*', and '/'. For example,
Number + Number will add two numbers. When a value or variable is preceded
by a minus sign, ­222, for example, Gambas computes the opposite sign of that
number. The value Zero is the opposite of itself. Now, we will start to write some
Gambas code using the Gambas terminal application feature. The console
window will display our output so lets use Gambas to experiment with the
operators as we learn about them.
<br/>
 
## Let's Start Coding Gambas

<br/>
Now that we know about data­types and variable assignments, lets get our
feet wet with Gambas. Start Gambas and from the Project Explorer File Menu
select New Project. As you go through the New Project Wizard, select a Terminal
Project and click Next. Name this project TerminalTest and place it in a directory
called TerminalTest. Don't worry about any of the other options. Just click
Next>> until the wizard completes. Once the IDE appears with your new project
we will need to create a startup class in order to run our code. From the Project
Explorer find the TreeView item called Classes and right­click the mouse. Choose
the New... option and take the default name Class1. The code window will
appear and inside the window it should look something like this:

<br/>

<code>
<FONT COLOR=#808080> '  &lsquo; Gambas class file </font>                                            <br/>
<b>STATIC PUBLIC SUB</b> Main()                           <br/>
** END                                                                            <br/> 
</code>

<br/>

Let's take a look at some Gambas keywords you should know a bit more about
before we proceed.
<br/>

END, RETURN and QUIT Statements

<br/>

 The END keyword indicates the end of a procedure or a function. There
are differences from VB when using END. In VB, the End command closes all
forms and files and terminates the program. In Gambas, the END command
works more like VB's End Function combined with VB's End Sub. It closes the
function or subroutine. For similar functionality to VB's End command, use the
QUIT command. It ends the program immediately. All windows are closed, and
everything is freed up in memory as cleanly as possible. In Gambas, when you
wish to exit a routine, you can use the RETURN command. Usually, RETURN is
used to return a value to the calling procedure. The format of RETURN is: