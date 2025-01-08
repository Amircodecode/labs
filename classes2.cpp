#include <iostream>
#include <string>
using namespace std;

// class Human {

//     public:
//         int age;
//         int weight;
//         string name;
    
//         void Print() {

//             cout << "name: " << name << 
//                     " weight " << weight <<     
//                     " age " << age << endl;

//         }

// };


// int main() {
//     Human firstHuman;

//     firstHuman.age = 18;
//     firstHuman.name = "Amir";
//     firstHuman.weight = 75;

//     // cout << firstHuman.age << firstHuman.name << firstHuman.weight << endl;

//     firstHuman.Print();

//     return 0;
// }

// class Point {
//     public:
//         int x;
//         int y;

//         void Print() {
//             cout << "y = " << y << " x = " << x << " z = " << z << endl;

//             PrintY();
//         }
    
//     private:
//         int z;

//         void PrintY() {
//             cout << " PrintY " << "z = " << z << endl;
//         }
// };

// int main() {
//     Point a;
//     a.Print();


//     return 0;
// }

class Point {
    private:
        int x;
        int y;

    public:
        int GetX() {
            return x;
        }

        void SetX(int valueX) {
            x = valueX;
        }

        void Print () {
            cout << "x = " << x << " y = " << y << endl;
        }
};

int main() {

    Point a;
    a.SetX(69);
    int result = a.GetX();
    // a.Print();
    
    cout << result << endl;

    return 0;
}