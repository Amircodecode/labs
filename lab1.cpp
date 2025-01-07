#include <iostream>
using namespace std;

int main() {
    cout << "**********----------Welcome to IUT----------**********" << endl;
    int integer = 5;
    double floatingPoint = 5.5;
    float flatingPoint = 7.5;
    char chacter = 'A';
    cout << "INTEGER: " << integer << endl
         << "DOUBLE: " << floatingPoint << endl
         << "FLOAT: " << flatingPoint << endl
         << "CHAR: " << chacter << endl;
        
    int side;
    cout << "enter the side: ";
    cin >> side;
    cout << "the area will be: " << side * side << endl;
    return  0;
}