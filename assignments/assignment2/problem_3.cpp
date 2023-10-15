#include <iostream>

using namespace std;

int main() {
    int numSubjects;
    cout << "Enter the number of subjects: ";
    cin >> numSubjects;

    double totalCreditHours = 0;
    double totalGradePoints = 0;

    for (int i = 1; i <= numSubjects; i++) {
        double marks, creditHours;

        cout << "Enter marks for subject " << i << ": ";
        cin >> marks;

        cout << "Enter credit hours for subject " << i << ": ";
        cin >> creditHours;

        double gradePoints = (marks / 10) * creditHours;

        totalCreditHours += creditHours;
        totalGradePoints += gradePoints;
    }

    double gpa = totalGradePoints / totalCreditHours;

    cout << "Your GPA is: " << gpa << endl;

    return 0;
}
