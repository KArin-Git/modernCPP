
#include <iostream>

//usd the entire std namespace
//using namespace std;

//use only what you need
using std::cout;
using std::cin;
using std::endl;

int main(int argc, const char * argv[]) {
    
    int favNum;
    
    cout << "Enter your favourite number between 1 to 100: ";
    cin >> favNum;
    cout << "Amazing! That's my favourite number too!" << endl;
    cout << "No really!, " << favNum << " is my favourite number." << endl;
    
    return 0;
}
