/* Block comment
 * File:   main.cpp
 * Author: Raymond Brady
 *
 * Created on January 29, 2013, 8:03 AM
 * Last update: 31 Jan 2013
 * Covers tutorial through operators section. (++, --)
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
    string firstname = "Raymond"; // c-like initialization
    string lastname("Brady"); // constructor initialization
    string fullname;
    
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
    
    // show the results
    cout << "C++ Tutorial practice code by " << fullname; // use string literal and declared variable
    cout << NEWLINE; // use defined constant
    cout << "result is: " << result << NEWLINE;
    cout << "a is: " << a << NEWLINE;
    cout << "f is: " << f;
    
    // terminate the program
    return 0;
    
    
}
