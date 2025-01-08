#include <iostream>
#include <string>

using namespace std;

const int MAX_STUDENTS = 100;

int main() {
    int numStudents;

    cout << "Enter the number of students: ";
    cin >> numStudents;

    if (numStudents > MAX_STUDENTS) {
        cout << "Error: Exceeded maximum number of students." << endl;
        return 1;
    }

    string studentNames[MAX_STUDENTS];
    int studentScores[MAX_STUDENTS];

    // Input student names and scores
    for (int i = 0; i < numStudents; i++) {
        cout << "Enter name of student " << i + 1 << ": ";
        cin >> studentNames[i];

        cout << "Enter score of student " << i + 1 << ": ";
        cin >> studentScores[i];
    }

    // Bubble Sort (ascending order)
    for (int i = 0; i < numStudents - 1; i++) {
        for (int j = 0; j < numStudents - i - 1; j++) {
            if (studentScores[j] < studentScores[j + 1]) {
                // Swap scores
                int tempScore = studentScores[j];
                studentScores[j] = studentScores[j + 1];
                studentScores[j + 1] = tempScore;

                // Swap names (important for maintaining correspondence)
                string tempName = studentNames[j];
                studentNames[j] = studentNames[j + 1];
                studentNames[j + 1] = tempName;
            }
        }
    }

    // Separate pass and fail students
    string passNames[MAX_STUDENTS];
    int passScores[MAX_STUDENTS];
    int passCount = 0;

    for (int i = 0; i < numStudents; i++) {
        if (studentScores[i] >= 50) {
            passNames[passCount] = studentNames[i];
            passScores[passCount] = studentScores[i];
            passCount++;
        }
    }

    // Display top 5 highest pass scores
    cout << "\nTop 5 Highest Pass Scores:\n";
    for (int i = 0; i < passCount; i++) {
        cout << passNames[i] << ": " << passScores[i] << endl;
    }

    return 0;
}