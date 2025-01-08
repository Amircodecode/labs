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

// class Point {
//     private:
//         int x;
//         int y;

//     public:
//         int GetY() {
//             return y;
//         }
//         int GetX() {
//             return x;
//         }

//         void SetY(int valueY) {
//             y = valueY;
//         }
//         void SetX(int valueX) {
//             x = valueX;
//         }

//         void Print () {
//             cout << "x = " << x << " y = " << y << endl;
//         }
// };

// int main() {

//     Point a;
//     a.SetX(69);
//     a.SetY(18);
//     int resultY = a.GetY();
//     int resultX = a.GetX();
//     // a.Print();
    
//     cout << " x = " << resultX << endl;
//     cout << " y = " << resultY << endl;

//     return 0;
// }

// class CoffeGrinder {
//     private:
//         bool checkVoltage() {
//             return false;
//         } 

//     public:
//         void Start() {
//             bool voltageIsNormal = checkVoltage();

//             if (voltageIsNormal) {
//                 cout << "started to work " << endl;
//             }
//             else {
//                 cout << "coffee will not be you " << endl;
//             }

//         }
// };

// int main() {
//     CoffeGrinder a;
//     a.Start();
//     return 0;
// }


// class Point {
   
//         int x;
//         int y;

//     public:

//         // Point(int valueX, int valueY) {
//         //     x = valueX;
//         //     y = valueY;
//         // }


//         int GetY() {
//             return y;
//         }
//         int GetX() {
//             return x;
//         }

//         void SetY(int valueY) {
//             y = valueY;
//         }
//         void SetX(int valueX) {
//             x = valueX;
//         }

//         void Print () {
//             cout << "x = " << x << " y = " << y << endl;
//         }
// };

// int main() {
//     // Point a(18, 19);
//     // Point b(23, 76);
//     // a.Print();
//     // b.Print();
//     Point a;
    

//     return 0;
// }