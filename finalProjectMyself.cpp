#include <iostream>
#include <string>

using namespace std;


int main() {
    int numberStudent;
    cout << "enter the number of studets: ";
    cin >> numberStudent;

    int *scores = new int[numberStudent];
    string *names = new string[numberStudent];

    for (int i = 0; i < numberStudent; i++) {
        cout << "enter the " << i + 1 << " student name ";
        cin >> names[i];

        cout << "enter the " << i + 1 << " score ";
        cin >> scores[i];
    }

    for (int i = 0; i < numberStudent - 1; i++) {
        for (int j = 0; j < numberStudent - i - 1; j++) {
            if (scores[j] < scores[j + 1]) {
                int tempScore = scores[j];
                scores[j] = scores[j + 1];
                scores[j + 1] = tempScore;

                string tempName = names[j];
                names[j] = names[j + 1];
                names[j + 1] = tempName;
            }
        }
    }

    int passStudents[numberStudent];
    string passNames[numberStudent];
    int cout = 0;

    
    return 0;
}