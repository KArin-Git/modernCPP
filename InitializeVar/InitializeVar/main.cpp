// Declaring and initializing variables
// This program will calculate the area of a room in square feet

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    
//    int width {0};
//    int length {0};
    
    cout << "Enter the width of the room: ";
    int width {0};
    cin >> width;
    
    cout << "Enter the length of the room: ";
    int length {0};
    cin >> length;
    
    cout << "The area of the room is " << width * length << " square feet" << endl;
    
    return 0;
}
