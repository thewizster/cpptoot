/* Block comment
 * File:   main.cpp
 * Author: Raymond Brady
 *
 * Created on January 29, 2013, 8:03 AM
 * Last update: 1 Feb 2013
 * Covers tutorial through operators section.
 * Based on: http://www.cplusplus.com/doc/tutorial/
 */

// single line comment
#include <iostream>
#include <string>
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
    cout << "C++ Tutorial practice code by " << fullname; // use string literal and declared variable
    cout << NEWLINE; // use defined constant
    cout << "result is: " << result << NEWLINE;
    cout << "a is: " << a << NEWLINE;
    cout << "b is: " << b << NEWLINE;
    cout << "c is: " << c << NEWLINE;
    cout << "d is: " << d << NEWLINE;
    cout << "e is: " << e << NEWLINE;
    cout << "f is: " << f << NEWLINE;
    cout << "g is: " << g << NEWLINE;
    cout << "h is: " << h << NEWLINE;
    
    // terminate the program
    return 0;
    
    
}
