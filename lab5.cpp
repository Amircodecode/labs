#include <iostream>
using namespace std;

// int returnAverage();

int main() {
    // cout << "the average is: " << returnAverage() << endl;
    int number;
    cout << "enter the number: ";
    cin >> number;

    int reversed = 0;
    while (number > 0) {
        int rem = number % 10;
        reversed = reversed * 10 + rem;
        number /= 10;
    }
    cout << reversed << endl;
    return 0;
}

// int returnAverage() {
//     int sum = 0;
//     for (int i = 0; i <= 10; i++) {
//         sum += i;
//     }
//     return sum / 10;
// }