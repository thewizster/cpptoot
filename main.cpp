/* Block comment
 * File:   main.cpp
 * Author: Raymond Brady
 *
 * Created on January 29, 2013, 8:03 AM
 * Last update: 2 Feb 2013
 * Covers tutorial through if else in Control Structures section.
 * Based on: http://www.cplusplus.com/doc/tutorial/
 */

// single line comment
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

// Defined constants are directives for the preprocessor. Each occurrence
// of the constant in your code will be replaced by the value defined here.
// when the compiler preprocessor runs, it performs this replace operation.
// no semicolon needed here since these are not c++ statements. A semicolon
// would actually be included as part of the value.
#define PI 3.14159 // Defined constant
#define NEWLINE '\n' // Defined constant

int main ()
{
    // Declared Constants. Values cannot be changed after definition.
    const int complete = 100;
    const char tabulator = '\t'; // char type is inside single quotes
    
    // declare variables
    int a = 5; // c-like initialization. Value of 5
    int d(6); // constructor initialization. Value of 6
    int b, c;
    int result;
    int e;
    int f, g;
    float h;
    string firstname = "Raymond"; // c-like initialization
    string lastname("Brady"); // constructor initialization
    string fullname;
    bool answer;
    
    //process
    c = 1;
    b = 2; // the value of 2 will be replaced below.
    a = a + 1; // Addition
    c = c + d;
    e = 2 + (b = 3); // assignment of b can be part of the right value (rvalue)
    a = b = c = d = e = 5; // Sets all to value of 5
    result = a - b;   // variable identifier is result
    result = result + c;
    result = result * 2; // multiply
    result = result / 2; // Divide
    result = result % 2; // Modulo is remainder of result divided by 2
    fullname = firstname + " " + lastname + " ";
    
    // Compound Assignment
    a += 1; // a = a + 1;
    a -= 1; // a = a - 1;
    a /= 1; // a = a / 1;
    a *= b + 1; // a = a * (b + 1);
    
    // Increase and decrease
    f = 1;
    f++; // f = f + 1;
    f--; // f = f - 1;
    
// Relational and equality operators
    // ==, !=, >, <, >=, <=
    answer = (7 == 5); // evaluates to false
    answer = (5 > 4);  // evaluates to true
    answer = (3 != 2); // evaluates to true
    answer = (6 >= 6); // evaluates to true
    answer = (5 < 5);  // evaluates to false
    answer = (a == 5);
    answer = (2*3 >= 6); // evaluates to true
    answer = ((b=2) == 2); // evaluates to true
    answer = (2+2 > 4-1); // evaluates to true
    
// Logical operators !, &&, ||
    // ! C++ operator for boolean operator NOT. Returns inverse of operand
    answer = !(5 == 5); // evaluates to false since (5 == 5) would be true
    answer = !(6 <= 4); // true because (6 <= 4) would be false.
    answer = !true;     // evaluates to false
    answer = !false;    // evaluates to true
    
    // && boolean logical operation AND. True if both operands are true
    answer = ((5 == 5) && (3 > 6)); // evaluates false (true && false)
    // || boolean logical operator OR. True if either operand is true.
    answer = ((5 == 5) || (3 > 6)); // evaluates true (true || false)
    
// short-circuit evaluation
    /*
     * &&       If the left-hand side expression is false, the combined result
     *          is false (right-hand side expression not evaluated)
     * 
     * ||       If the left-hand side expression is true, the combined result
     *          is true (right-hand side expression not evaluated)
     * 
     * Important when right-hand side expression alters values
     * if ((i<10)&&(++i<n)) {...}
     */
    
// Conditional operator ?
    f = 7==5 ? 4 : 3; // Returns 3, since 7 is not equal to 5
    f = 7==5+2 ? 4 : 3; // Returns 4, since 7 is equal to 5+2
    f = 5>3 ? a : b; // returns value of a since 5 is greater than 3
    f = a>b ? a : b; // returns whichever is greater, a or b.
    
// Comma operator ,
    // First assigns b value of 3, then assigns b+2 to variable a.
    a = (b=3, b+2); // a equals 5 and b equals 3
    
// Explicit type casting
    g = (int) PI; // returns 3 - C style
    g = int (PI); // returns 3 - C++ Functional notation style
    
// sizeof()
    // Returns size (In bytes) of a type or variable.
    // Value returned is a constant, always determined before execution
    h = sizeof(char); // Returns 1 because size of char is one-byte long
    h = sizeof(a); // Returns the size of the variable a
    h = sizeof("Hello world");
    
    
// show the results
    // using cout in conjunction with the insertion operator <<
    cout << ":: STANDARD OUTPUT (cout)" << NEWLINE;
    cout << "C++ Tutorial practice code by " << fullname; // use string literal and declared variable
    cout << NEWLINE; // use defined constant
    cout << "result is: " << result << NEWLINE;
    cout << " a:" << a;
    cout << " b:" << b;
    cout << " c:" << c;
    cout << " d:" << d;
    cout << " e:" << e;
    cout << " f:" << f;
    cout << " g:" << g;
    cout << " h:" << h << NEWLINE;
    
// Standard Output (cout)
    cout << "This is a sentence." << "This is another sentence on same line. ";
    cout << "This is boring but it shows you exactly how to use C++\n";
    cout << "and the different ways\nthat you can insert a new line." << endl;
    cout << "The endl manipulator produces a newline character, exactly\n";
    cout << "as the insertion of \\n does, but it also has an additional" << endl;
    cout << "behavior when it is used with buffered streams: the buffer" << endl;
    cout << "is flushed. Anyway, cout will be an unbuffered stream in most" << endl;
    cout << "cases, so you can generally use both the \\n escape character\n";
    cout << "and the endl manipulator in order to specify a new line without\n";
    cout << "any difference in it's bahvior." << endl;
    cout << NEWLINE << NEWLINE;
    
// Standard Input (cin)
    // using cin in conjunction with the extraction operator >>
    cout << ":: STANDARD INPUT (cin)\n";
    cout << "Enter your first name (one word only): ";
    cin >> firstname;
    cout << "How old are you " << firstname << ": ";
    int age;
    cin >> age;
    // Try entering more than 1 character to see what can happen here.
    cout << "Enter a key from the keyboard then press enter: ";
    char key;
    cin >> key;
    // Try entering more than one word separated by a space to see what happens.
    cout << "Enter your dogs name (one word only): ";
    string dog;
    cin >> dog; // Not a good way to capture strings
    // request more than one datum from the user
    cout << "Enter two integers separated by a space: ";
    int dat1, dat2;
    cin >> dat1 >> dat2;
    // Using getline is the preferred method for user input
    cin.ignore(); // ignore newline from previous cin.
    cout << "Enter a full sentence: ";
    string sentence;
    getline (cin,sentence);
    
    // Show the results of input
    cout << ":: INPUT RESULTS" << endl;
    cout << " age:" << age;
    cout << " key:" << key;
    cout << " dog:" << dog;
    cout << " Integer1:" << dat1;
    cout << " Integer2:" << dat2 << endl;
    cout << " Sentence: " << sentence << endl;
    cout << "Press enter to continue...";
    cin.ignore();
    cout << NEWLINE << NEWLINE;
    
    // stringstream
    cout << ":: STRINGSTREAM\n";
    cout << "This shows an example of how to use stringstream to extract an\n";
    cout << "integer from a string.\n\n";
    string mystr;
    int quantity=0;
    float price=0;
    cout << "Enter price: ";
    getline (cin,mystr);
    stringstream(mystr) >> price;
    cout << "Enter quantity: ";
    getline (cin,mystr);
    stringstream(mystr) >> quantity;
    cout << "Total price: " << price*quantity << endl;
    cout << "Press enter to continue...";
    cin.ignore();
    cout << endl << endl;
    
// Conditional structure: if and else
    cout << ":: CONDITIONAL STRUCTURE: if and else\n";
    cout << "The if keyword is used to execute a block of code if the condition\n";
    cout << "evaluates to true.\n\n";
    cout << "If statement form: if (condition) statement\n\n";
    cout << "NOTE: In this section of the tutorial the program may pause after displaying\n";
    cout << "some code or text. Press the enter key and the program will continue.\n\n";
    cout << "Here I initialize x to a value of 100:\n";
    cout << "int x(100);\n\n";
    cin.ignore();
    int x(100);
    cout << "Now I evaluate if x equals 100. If so, then I execute the code\n";
    cout << "on the next line. This is a single statement conditional structure.\n\n";
    cout << "if (x == 100)\n    cout << \"x is 100\";\n\n";
    cin.ignore();
    if (x == 100) // if x is equal to 100 then execute the statement
        cout << "x is 100\n\n";
    cin.ignore();
    cout << "Now for an example of a compound statement block.\n\n";
    cout << "if (x != 99)\n{\n";
    cout << "    cout << \"Compound statement blocks can contain multiple statements.\"\n";
    cout << "    cout << \"Each statement between the curly braces will be executed\"\n";
    cout << "    cout << \"if the condition evaluates to true. In this case:\"\n";
    cout << "    cout << \"x is not equal to 99 is a true condition.\"\n}\n";
    cin.ignore();
    if (x != 99)
    {
        cout << "Compound statement blocks can contain multiple statements.\n";
        cout << "Each statement between the curly braces will be executed\n";
        cout << "if the condition evaluates to true. In this case:\n";
        cout << "x is not equal to 99 is a true condition.\n\n";
    }
    
    cin.ignore();
    
    // else keyword
    cout << "We can also specify what we want to happen if the condition is not true\n\n";
    cout << "if (x == 100)\n  cout << \"x is 100\";\nelse\n  cout << \"x is not 100\";\n\n";
    cin.ignore();
    cout << "RESULT: ";
    if (x == 100)
        cout << "x is 100";
    else
        cout << "x is not 100";
    cin.ignore();
    
    cout << "\nwe can use if else structures to verify a range of values.\n\n";
    cout << "if (x > 0)\n        cout << \"x is positive.\";\nelse if (x < 0)\n        cout << \"x is negative.\";\nelse\n        cout << \"x is zero.\";\n\n";
    cout << "RESULT: ";
    if (x > 0)
        cout << "x is positive.";
    else if (x < 0)
        cout << "x is negative.";
    else
        cout << "x is zero.";
    cin.ignore();
    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
// ITERATION STRUCTURES (LOOPS)
    int n;
    cout << ":: ITERATION STRUCTURES (LOOPS)\n\n";
    cout << "   The while loop\n\n   The format is:\n     while (expression) statement\n\n";
    cin.ignore();
    cout << "     while (n>0) {\n        cout << n << \", \";\n        --n;\n     }\n\n";
    cout << "Let's define n. What value would you like n to be? ";
    cin >> n;
    cin.ignore();
    cout << "Thanks! I have:\n     int n(" << n << ");\n\n";
    cout << "Now, press enter and I'll run the loop...";
    cin.ignore();
    cout << "\n";
    // while n is greater than zero the loop will continue. In order to avoid
    // an infinite loop we must ensure that the value of n becomes zero at some
    // point. The value of n becoming zero causes the expression to be false
    // which stops the loop.
    while (n>0) {
     cout << n << ", ";
     --n; // decrease the value of n by one each loop. Ensures n will become zero
    }
    cout << "HAPPY NEW YEAR!!!\n\n";
    cin.ignore();
    
    cout << "   The do-while loop.\n\n   The format is:\n     do statement while (condition)\n\n";
    cout << "   It functions exactly the same as the while loop, except that condition in the\n";
    cout << "   do-while loop is evaluated after the execution of the statement. The statement will\n";
    cout << "   execute at least once even if the condition is never fulfilled.\n\n";
    cout << "   An example:\n";
    cout << "      unsigned long n;\n      do {\n        cout << \"Enter number (0 to end): \";\n        cin >> n;\n        cout << \"You entered: \" << n << endl;\n      } while (n != 0);\n\n";
    cin.ignore();
    
    // terminate the program
    return 0;
}
