//Section 5

#include <iostream>

using namespace::std;

int main (int argc, const char * argv[]) {
    
    //NO new line
//    cout << "Hello World!";
    
    //Having new line by using endl
//    cout << "Hello";
//    cout << "World" << endl;
//
    
    //All three are identical BUT the last statement having new line between word
//    cout << "Hello World!" << endl;
//    cout << "Hello" << " World!" << endl;
//    cout << "Hello" << " World!\n";
//    cout << "Hello\nOut\nThere\n";
    
    int num1;
    //int num2;
    double num3;
    
//    cout << "Enter an interger: ";
//    cin >> num1;
//    cout << "You entered: " << num1 << endl;
    
    //Notice what will happen when leaving white space after first interger
//    cout << "Enter a first integer: ";
//    cin >> num1;
//
//    cout << "Enter a second integer: ";
//    cin >> num2;
//
//    cout << "You entered " << num1 << " and " << num2 << endl;

//    cout << "Enter 2 intergers separated with a space: ";
//    cin >> num1 >> num2;
//    cout << "You entered " << num1 << " and " << num2 << endl;
   
//    cout << "Enter a double: ";
//    cin >> num3;
//    cout << "You entered: " << num3 << endl;
    
    //Notice what will happen when user inputs double for num1
    cout << "Enter an interger: ";
    cin >> num1;
    cout << "Enter a souble: ";
    cin >> num3;
    
    cout << "The integer is " << num1 << endl;
    cout << "And the double is " << num3 << endl;
    
    
    return 0;
}
