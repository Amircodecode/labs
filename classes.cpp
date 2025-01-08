#include <iostream>
#include <string>

using namespace std;

class Human {
    public:

        int age;
        int weight;
        string name;

};


int main() {

    Human firstHuman;

    firstHuman.age = 18;
    firstHuman.name = "amir";
    firstHuman.weight = 75;

    cout << firstHuman.name << " ";
    cout << firstHuman.age << endl;
    cout << firstHuman.weight << " kg"<< endl;

    Human secodnhuman;
    secodnhuman.age = 24;
    secodnhuman.name = "nazar";
    secodnhuman.weight = 50;
    cout << secodnhuman.name << " ";
    cout << secodnhuman.age << endl;
    cout << secodnhuman.weight << " kg"<< endl;

    return 0;
}