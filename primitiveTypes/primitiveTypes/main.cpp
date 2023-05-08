// Primitive Types

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    
    //MARK: character type
    // using a single quote
    char middleInitial {'J'};
    cout << "My middle initial is " << middleInitial << endl;
    
    //MARK: integer type
    unsigned short int examScore {55};
    cout << "My exam score was " << examScore << endl;
    
    int countriesRepresented {65};
    cout << "There were " << countriesRepresented << " countries represented in my meeting" << endl;
    
    long pplInFl {20610000};
    cout << "There are about " << pplInFl << " people in Fl" << endl;
    
    long long pplOnEarth {7'600'000'000};
    cout << "There are about " << pplOnEarth << " People on earth" << endl;
    
    long long distanceToAlphaCentauri {9'461'000'000'000};
    cout << "The distance to alpha centauri is " << distanceToAlphaCentauri << " kilometres" << endl;
    
    //MARK: floating point types
    float carPayment {401.23};
    cout << "My car payment is " << carPayment << endl;
    
    double pi {3.14159};
    cout << "PI is " << pi << endl;
    
    long double largeAmt {2.7e120};
    cout << largeAmt << " is a very big number" << endl;
    
    //MARK: boolean type
    bool gameOver {false};
    cout << "The value of game over is " << gameOver << endl;
    
    //MARK: overflow example
    short value1 {30000};
    short value2 {1000};
    multi {value1 * value2};
    
    cout << "The multiply of " << value1 << " and " << value2 << " is " << multi << endl;
    return 0;
}
