#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "enter three integers: ";
    cin >> a >> b >> c;
    int smallest;
    if (a <= b && a <= c) 
        smallest = a;
    
    if (b <= a && b <= c) 
        smallest = b;
    
    if (c <= a && c <= b) 
        smallest = c;
    
    int highest;
     if (a >= b && a >= c) 
        highest = a;
    
    if (b >= a && b >= c) 
        highest = b;
    
    if (c >= a && c >= b) 
        highest = c;
    cout << "the smallest number is: " << smallest << endl;
    cout << "the hightest number is: " << highest << endl;
    return 0;
}