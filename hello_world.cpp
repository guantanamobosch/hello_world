// ------------------------
// 🛶 Hello World

// "comprises conventions for input and output streams"
// #include <iostream>
// using namespace std;

// int main()    // -'int' indicates the type of the function
// -'main' indicates the function name, but the 'main()' function is also global and always need to be written
// { // -'{' is the beginning of the function
//     // cout - 'console output' || '<<' means that characters are being pushed to the output stream || endl - 'end line'
//     cout << "Hello world!" << endl;

//     // terminates main() function and the program || 'standard practice to use exit code 0'?
//     return 0;

//     // -'}' is the end of the function
// }

// ------------------------------
// 🛶 Prototypes

// #include <iostream>
// using namespace std;

// void line(), message(); // Prototypes

// int main()
// {
//     cout << "Hello! The program starts in main()." << endl;
//     line();
//     message();
//     line();
//     cout << "At the end of main()." << endl;

//     return 0;
// }

// void line()
// {
//     cout << "----------------------------" << endl;
// }

// void message()
// {
//     cout << "In function message()." << endl;
// }

// -----------------------------
// 🛶 Prototypes 2

// #include <iostream>
// using namespace std;

// void pause(); // Prototype

// int main()
// {
//     cout << endl
//          << "Dear reader, " << endl
//          << "have a ";
//     pause();
//     cout << "!" << endl;

//     return 0;
// }

// void pause()
// {
//     cout << "BREAK";
// }

// ---------------------------
// 🛶  Line Breaks with endl

// #include <iostream>
// using namespace std;

// int main()
// {
//     cout << endl
//          << "Oh what" << endl
//          << "a happy day!" << endl
//          << "Oh yes," << endl
//          << "what a happy day!" << endl;

//     return 0;
// }

// -----------------------------
// 🛶 Line Breaks 2

// #include <iostream>
// using namespace std;

// int main()
// {
//     cout << "If this text"
//          << " appears on your display, "
//          << endl
//          << "you can pat yourself on "
//          << " the back!" << endl;

//     return 0;
// }

// -----------------------------------
// 🛶 Range of Types Int and Unsigned Int

// #include <iostream>
// #include <climits> // This file defines constants such as CHAR_MIN, CHAR_MAX, INT_MIN, and INT_MAX, which represent the smallest and greatest possible values
// using namespace std;
// int main()
// {
//     cout << "Range of types int and unsigned int"
//          << endl
//          << endl;
//     cout << "Type             Minimum           Maximum"
//          << endl
//          << "--------------------------------------------"
//          << endl;
//     cout << "int            " << INT_MIN << "        "
//          << INT_MAX << endl;
//     cout << "unsigned int   "
//          << "          0        "
//          << UINT_MAX << endl;
//     return 0;
// }

// ------------------------

// To display hexadecimal integer literals and
// decimal integer literals.
//
// #include <iostream>
// using namespace std;

// int main()
// {
//     // cout outputs integers as decimal integers:
//     cout << "Value of 0xFF = " << 0xFF << " decimal"
//          << endl; // Output: 255 decimal
//     // The manipulator hex changes output to hexadecimal
//     // format (dec changes to decimal format):
//     cout << "Value of 27 = " << hex << 27 << " hexadecimal"
//          << endl; // Output: 1b hexadecimal
//     return 0;
// }

// ------------------------------------
// 🛶 Definition and use of variables

// #include <iostream>
// using namespace std;

// int gVar1;     // Global variables,
// int gVar2 = 2; // explicit initialization

// int main()
// {
//     char ch('A'); // Local variable being initialized
//                   // or: char ch = 'A';

//     cout << "Value of gVar1:    " << gVar1 << endl;
//     cout << "Value of gVar2:    " << gVar2 << endl;
//     cout << "Character in ch:   " << ch << endl;

//     int sum, number = 3; // Local variables with
//                          // and without initialization
//     sum = number + 5;
//     cout << "Value of sum:      " << sum << endl;

//     return 0;
// }

// ------------------------------------------------------
// 🛶 Circumference and area of a circle with radius 2.5

// #include <iostream>
// using namespace std;

// const double pi = 3.141593;

// int main()
// {
//     double area, circuit, radius = 2.5;

//     area = pi * radius * radius;
//     circuit = 2 * pi * radius;

//     cout << "\nTo Evaluate a Circle\n"
//          << endl;

//     cout << "Radius:        " << radius << endl
//          << "Circumference: " << circuit << endl
//          << "Area:          " << area << endl;

//     return 0;
// }

// --------------------------------------------------
// 🛶 self-guided practice program - good job, buddy

// #include <iostream>
// #include <string>
// using namespace std;

// void hiEmily();

// int main()
// {
//     string luvIt = "and i luv it";

//     cout << "This is C++ " << luvIt << endl;
//     hiEmily();

//     return 0;
// }

// void hiEmily()
// {
//     cout << "HI EMlY I Luv UUU" << endl;
// }

// -----------------------
// 🛶 I rush to and fro

// #include <iostream>
// using namespace std;

// int main()
// {
//     cout << "\tI" << endl
//          << "\t\tRUSH" << endl
//          << "\t\t\t\\TO\\" << endl
//          << "\t\tAND" << endl
//          << "\t/FRO/" << endl;

//     return 0;
// }

// -----------------------------
// 🛶 Size of Fundamental Types

// #include <iostream>
// using namespace std;

// int main()
// {
//     cout << "\nSize of Fundamental Types\n"
//          << "  Type           Number of Bytes\n"
//          << "----------------------------------" << endl;
//     cout << "  char:           " << sizeof(char) << endl; // 1
//     cout << "  short:          " << sizeof(short) << endl; // 2
//     cout << "  int:            " << sizeof(int) << endl; // 4
//     cout << "  long:           " << sizeof(long) << endl; // 8
//     cout << "  float:          " << sizeof(float) << endl; // 4
//     cout << "  double:         " << sizeof(double) << endl; // 8
//     cout << "  long double:    " << sizeof(long double) << endl; // 8

//     return 0;
// }

// ---------------------
// 🛶 Two Floating point numbers

// #include <iostream>
// using namespace std;

// int main()
// {
//     float first = 123.456, second = 76.543;

//     cout << "The numbers are "
//          << first << " and "
//          << second << endl;

//     return 0;
// }

// ---------------------
// 🛶 Mathematical standard functions

// Some of these functions are available from the cmath library (#include <cmath>)
// double sin (double);
// double cos (double);
// double tan (double);
// double atan (double);
// double cosh (double);
// double sqrt (double);
// double pow (double, double);
// double exp (double);
// double log (double);
// double log10 (double);

// ------------------
// 🛶 Calculating powers with
//      the standard function pow()

// #include <iostream> // Declaration of cout
// #include <cmath>    // Prototype of pow(), thus:
//                     // double pow(double, double)
// using namespace std;

// int main()
// {
//     double x = 2.5, y;

//     // By means of a prototype, the compiler generates
//     // the correct call or an error message!

//     // Computes x raised to the power 3:
//     // y = pow("x", 3.0); // Error! String is not a number
//     // y = pow(x + 3.0);  // Error! Just one argument
//     y = pow(x, 3.0); // ok!
//     y = pow(x, 3);   // ok! The compiler converts the
//                      // int value 3 to double.

//     cout << "2.5 raised to 3 yields:        " << y << endl;

//     // Calculating with pow() is possible:
//     cout << "2 + (5 raised to the power 2.5) yields: " << 2.0 + pow(5.0, x) << endl;

//     return 0;
// }

// -----------------
// 🛶 Short test of cout

// #include <iostream>
// using namespace std;

// int main()
// {
//     cout << "2.0 + 3.0 = " << 2.0 + 3.0 << endl
//          << "And 2.0 * 3.0 = " << 2.0 * 3.0 << endl;

//     return 0;
// }

// --------------------
// 🛶 Outputs three random numbers

// #include <iostream> // Declaration of cin and cout
// #include <cstdlib>  // Prototypes of srand(), rand():
//                     // void srand( unsigned int seed );
//                     // int rand( void );
// using namespace std;
// int main()
// {
//     unsigned int seed;
//     int z1, z2, z3;

//     cout << "   --- Random Numbers --- \n"
//          << endl;
//     cout << "To initialize the random number generator, "
//          << "\n please enter an integer value: ";
//     cin >> seed; // Input an integer

//     srand(seed); // and use it as argument for a
//                  // new sequence of random numbers.

//     z1 = rand(); // Compute three random numbers.
//     z2 = rand();
//     z3 = rand();

//     cout << "\nThree random numbers: " << z1 << "   " << z2 << "    " << z3 << endl;

//     return 0;
// }

// --------------------------
// 🛶 Using strings

// #include <iostream> // Declaration of cin, cout
// #include <string>   // Declaration of class string
// using namespace std;

// int main()
// {
//     // ✳️ Defines four strings:
//     string prompt("What is your name:   "),
//         name,             // An empty
//         line(40, '-'),    // string with 40 '-'
//         total = "Hello "; // is possible!

//     cout << prompt;     // Request for input.
//     getline(cin, name); // Inputs a name in one line

//     total = total + name; // Concatenates and
//                           // assigns strings.

//     cout << line << endl // Outputs line and name
//          << total << endl;
//     cout << " Your name is " // Outputs length
//          << name.length() << " characters long!" << endl;
//     cout << line << endl;

//     return 0;
// }

// --------------------------
// 🛶 Code snippet from ChatGPT (vector, push_back, .size(), for loop)

// #include <vector>
// #include <iostream>
// using namespace std;

// int main()
// {
//     // Create a vector of integers named numbers
//     vector<int> numbers;

//     // Add elements to the vector
//     numbers.push_back(10);
//     numbers.push_back(20);
//     numbers.push_back(30);

//     // Acess elements in the vector using indices
//     cout << numbers[0] << endl; // Output: 10
//     cout << numbers[1] << endl; // Output: 20

//     // Get the size of the vector
//     cout << "Size: " << numbers.size() << endl;

//     // Iterate over the vector using a range-based for loop
//     // for (int num : numbers)
//     // {
//     //     cout << num << " "; //                              Not viable: range-based for loop is a C++11 extension
//     // }
//     // Output: 10 20 30

//     return 0;
// }

// ------------------------------
// 🛶 For loops

// #include <iostream>
// using namespace std;

// int main()
// {
//     // for (int i = 0; i < 5; i++)
//     // {
//     //     cout << i << "\n";
//     // }

//     for (int i = 0; i < 100; i++)
//     {
//         }
// }

// ------
//

// #include <iostream>
// #include <vector>

// int main()
// {
//     std::vector<int> myvector = {1, 2, 3, 4, 5};

//     std::cout << "myvector backwards:";
//     for (auto rit = myvector.crbegin(); rit != myvector.crend(); ++rit)
//         std::cout << ' ' << *rit;
//     std::cout << '\n';

//     return 0;
// }

// -------------------
// 🛶 Compute square roots

// #include <iostream>
// #include <cmath>
// using namespace std;

// int main()
// {
//     double x1 = 4.0, x2 = 12.25, x3 = 0.0121;

//     cout << "\n   Number  \t Square Root" << endl;
//     cout << "\n    " << x1 << "   \t " << sqrt(x1)
//          << "\n    " << x2 << "   \t " << sqrt(x2)
//          << "\n    " << x3 << "   \t " << sqrt(x3) << endl;

//     cout << "\nType a number whose square root is to be"
//             " computed. ";
//     cin >> x1;

//     cout << "\n   Number  \t Square Root" << endl;
//     cout << "\n   " << x1 << "  \t " << sqrt(x1) << endl;

//     return 0;
// }

// -----------------------
// 🛶 Learn from your mistakes!

// removed spaces after '#'
// gave <string> its own '#include' line
// changed '# include <stdlib>' to '#include <cstdlib>'
// #include <iostream>
// #include <string>

// #include <cstdlib> // removes the need to call something like 'void srand(seed)',
//                    // as this library includes that prototype and others

// using namespace std;

// int main()
// {
//     string message("\nLearn from your mistakes!");
//     cout << message << endl;

//     // 'message.length()' instead of 'length(message)';
//     int len = message.length();
//     cout << "Length of the string: " << len << endl;

//     // And a random number in additon:
//     int b;      // variable 'a' is not needed
//     srand(12);  // instead of 'a = srand(12.5);'
//     b = rand(); // instead of 'b = rand(a);'
//     cout << "\nRandom number: " << b << endl;

//     return 0;
// }

// -------------------------------
// 🛶 "I have learned something new again!"

// #include <iostream>
// #include <string>
// using namespace std;

// int main()
// {
//     string message("I have learned something new again!\n"),
//         prompt("Please input two lines of text:"),
//         str1, str2, sum;

//     cout << message << endl;

//     // why does the prompt only ask for two lines if there is a sum variable defined above in essentially the same way that the two strings are defined?
//     cout << prompt << endl;

//     getline(cin, str1);
//     getline(cin, str2);

//     sum = str1 + " * " + str2;
//     cout << sum << endl;

//     return 0;
// }

// --------------------------
// 🛶 Read integral decimal values / generate octal, decimal
// and hexadecimal output

// #include <iostream>
// using namespace std;

// int main()
// {
//     int number;
//     cout << "Please enter an integer: ";
//     cin >> number;
//     cout << uppercase                                // 〜waves in the (output) stream
//          << " octal  \t decimal  \t hexadecimal\n "
//          << oct << number << "       \t "
//          << dec << number << "       \t "
//          << hex << number << endl;
//     return 0;
// }

// ------------------------------------
// 🛶 Setprecision, precision, showpoint, fixed, scientific))

// #include <iostream>
// using namespace std;
// int main()
// {
//     double x = 12.0;
//     cout.precision(2); // Precision: 2
//     cout << " By default:   " << x << endl;
//     cout << " showpoint:    " << showpoint << x << endl;
//     cout << " fixed:        " << fixed << x << endl;
//     cout << " scientific    " << scientific << x << endl;
//     return 0;
// }

// -------------------------------------
// 🛶 Setting field widths

// #include <iostream>
// #include <iomanip>
// using namespace std;

// int main()
// {
//     cout << '|' << setw(6) << 'X' << '|';
//     cout << fixed << setprecision(2)
//          << setw(10) << 123.4 << endl
//          << "1234567890" << endl;

//     return 0;
// }

// -------------------------------
// 🛶 Reads a char and outputs its
// octal, decimal, and hexadecimal code

// #include <iostream>
// #include <iomanip>

// #include <string>
// using namespace std;

// int main()
// {
//     int number = ' ';

//     cout << "The white space code is as follows: "
//          << number << endl;

//     char ch;
//     string prompt =
//         "\nPlease enter a character followed by "
//         " <return>: ";

//     cout << prompt;

//     cin >> ch;
//     number = ch;

//     cout << "The character " << ch
//          << " has code " << number << endl;

//     cout << uppercase
//          << "      octal  decimal  hexadecimal\n "
//          << oct << setw(8) << number
//          << dec << setw(8) << number
//          << hex << setw(8) << number << endl;

//     return 0;
// }