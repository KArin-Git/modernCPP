//
//  main.cpp
//  cstringNcctype
//
//  Created by Bussarin Apichitchon on 30/5/2566 BE.
//

#include <iostream>
#include <cstring> // for c-style functions
#include <cctype> // for character-based function

using namespace std;

int main(int argc, const char * argv[]) {
    
    char firstName[21]{};
    char lastName[21]{};
    char fullName[51]{};
    char temp[51]{};
    
    // Will likely to display garbage EXCEPT we init cstring
    //cout << firstName << endl;
    
    cout << "Please enter your first name: ";
    cin >> firstName;
    cout << "Please enter your last name: ";
    cin >> lastName;
    cout << "------------------------------" << endl;
    
    //MARK: strlen and size_t
    cout << "Hello, " << firstName << "your first name has " << strlen(firstName) << "characters" << endl;
    cout << "and your last name, " << lastName << "has " << strlen(lastName) << "characters" << endl;
    
    return 0;
}
