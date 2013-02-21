/* Block comment
 * File:   main.cpp
 * Author: Raymond Brady
 *
 * Created on January 29, 2013, 8:03 AM
 * Last update: 11 Feb 2013
 * Covers tutorial through Control Structures section.
 * Based on: http://www.cplusplus.com/doc/tutorial/
 */

// single line comment
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int varconop(); // forward declaration using function prototype
#define NEWLINE '\n' // Defined constant

int main ()
{
    // Declared Constants. Values cannot be changed after definition.
    const int complete = 100;
    const char tabulator = '\t'; // char type is inside single quotes
    
    // Variable declaration
    string yourname;
    
    //  This function includes code samples through basic output section
    varconop(); // do stuff to variables. See basics1.cpp file... 
    
   
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
    cin >> yourname;
    cout << "How old are you " << yourname << ": ";
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
    unsigned long i;
    do {
        cout << "Enter number (0 to end): ";
        cin >> i;
        cout << "You entered: " << i << "\n";
    } while (i != 0);
    cin.ignore();
    cout << "\n\n\n\n\n\n\n\n\n";
    // The for loop
    cout << "   The for loop\n\n   The format is:\n     for (initialization; ";
    cout << "condition; increase) statement\n\n";
    cout << "   The for loop repeats statement while condition remains true,\n";
    cout << "   like the while loop. It also provides for an init statement and\n";
    cout << "   and an increase statement. It is designed to perform a repetitive\n";
    cout << "   action with a counter which is initialized and increased on each\n";
    cout << "   iteration.\n   Press enter to continue...";
    cin.ignore();
    cout << "\n\n     for (int n=10; n>0; n--) {\n       cout << n << \", \";\n     }\n     cout << \"FIRE!\" << endl;\n\n";
    cout << "Press enter to continue...";
    cin.ignore();
    for (int j=10; j>0; j--) {
        cout << j << ", ";
    }
    cout << "FIRE!\n";

    // Jump statements
    cout << "\n\n:: JUMP STATEMENTS\n\n";
    cout << "   The break statement\n\n";
    cout << "   Using break we can leave a loop even if the condition for\n";
    cout << "   it's end is not fulfilled. Here is a variation of the previous\n";
    cout << "   for loop. Press enter to continue...";
    cin.ignore();
    for (int j=10; j>0; j--){
        cout << j << ", ";
        if (j==3)
        {
            cout << "countdown aborted!";
            break;
        }
    }
    cout << "\n\n   Press enter to continue:";
    cin.ignore();
    
    cout << "\n\n\n\n\n\n\n\n\n\n\n\n";
    cout << "   The continue statement\n\n";
    cout << "   continue causes the program to skip the rest of the loop in\n";
    cout << "   the current iteration as if the end of the statement has\n";
    cout << "   been reached. If you look close at the results you will see\n";
    cout << "   that there is no 5 in the countdown. Press enter to run the code.\n\n";
    cin.ignore();
    
    for (int k=10; k>0; k--)
    {
        if (k==5) continue;
        cout << k << ", ";
    }
    cout << "HAPPY NEW YEAR!!!";
    cin.ignore();
    
    // The selective structure: switch
    string myans;
    int mynum;
    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
    cout << "   the switch statement checks several constant values for an expression\n";
    cout << "   Similar to, and having the same results as, an if-else block.\n";
    cout << "   Take a peek at this code to understand how this works.\n\n";
    do {
        cout << "\n\n   What number is your favorite? (zero to exit loop)";
        getline (cin,myans);
        stringstream(myans) >> mynum;
        cout << "\n\n";
        switch (mynum) {
            case 1:
                cout << "     Number 1 is the best...";
                break;
            case 2:
                cout << "     2 is a popular choice...";
                break;
            case 3:
                cout << "     Number 3 ...";
                break;
            case 4:
                cout << "     4 guys walk into a bar...";
                break;
            case 5:
                cout << "     You also have 5 fingers on each hand...";
                break;
            default:
                cout << "     You chose " << mynum << "...";
        }
    } while (mynum!=0);
    cout << "\n\nPress enter to continue:";
    cin.ignore();
    cout << "\n\n\n\n\n\n\n\n\n\n";
    cout << "   Thank you for looking at this tutorial application. If it\n";
    cout << "   has been helpful to you please send me know. If you have an idea\n";
    cout << "   on how the code can be improved to make learning c++ basics easier,\n";
    cout << "   please make the code changes and submit them to me. If I find them\n";
    cout << "   helpful I will update the code and give you credit.";
    
    // terminate the program
    return 0;
}
