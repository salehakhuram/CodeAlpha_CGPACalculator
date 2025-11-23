#include<iostream>
using namespace std;

int main()
{
    int course, sem;

    // Semester validation
    do {
        cout << "Enter number of semesters: ";
        cin >> sem;

        if(sem <= 0) {
            cout << "Invalid! Semesters must be greater than 0.\n";
        }
    } while(sem <= 0);

    // Number of courses validation
    do {
        cout << "Enter the number of courses: ";
        cin >> course;

        if(course <= 0) {
            cout << "Invalid! Number of courses must be greater than 0.\n";
        }
    } while(course <= 0);

    float grade[50];
    float creditHours[50];

    double totalCredits = 0, totalGradePoints = 0;

    for(int i = 0 ; i < course ; i++)
    {
        // --- Credit Hours Validation ---
        do {
            cout << "\nCourse " << i+1 << " credit hours (1, 2, or 3): ";
            cin >> creditHours[i];

            if(creditHours[i] < 1 || creditHours[i] > 3) {
                cout << "Invalid! Credit hours must be 1, 2, or 3.\n";
            }
        } while(creditHours[i] < 1 || creditHours[i] > 3);

        // --- Grade Validation Based on Credit Hours ---
        if(creditHours[i] == 3)
        {
            do {
                cout << "Enter grade for Course " << i+1 << " (0.0 - 12.0): ";
                cin >> grade[i];

                if(grade[i] < 0.0 || grade[i] > 12.0)
                    cout << "Invalid! Grade must be between 0.0 and 12.0 for 3 CH.\n";

            } while(grade[i] < 0.0 || grade[i] > 12.0);
        }
        else if (creditHours[i] == 2)
        {
            do {
                cout << "Enter grade for Course " << i+1 << " (0.0 - 8.0): ";
                cin >> grade[i];

                if(grade[i] < 0.0 || grade[i] > 8.0)
                    cout << "Invalid! Grade must be between 0.0 and 8.0 for 2 CH.\n";

            } while(grade[i] < 0.0 || grade[i] > 8.0);
        }
        else if(creditHours[i] == 1)
        {
            do {
                cout << "Enter grade for Course " << i+1 << " (0.0 - 4.0): ";
                cin >> grade[i];

                if(grade[i] < 0.0 || grade[i] > 4.0)
                    cout << "Invalid! Grade must be between 0.0 and 4.0 for 1 CH.\n";

            } while(grade[i] < 0.0 || grade[i] > 4.0);
        }

        totalCredits += creditHours[i];
        totalGradePoints += grade[i] * creditHours[i];
    }

    double semesterGPA = totalGradePoints / totalCredits;

    // Cap at 4.0
    if(semesterGPA > 4.0)
        semesterGPA = 4.0;

    double prevCGPA, prevCredits;

    // Previous CGPA Validation
    do {
        cout << "\nEnter previous CGPA (0.0 - 4.0): ";
        cin >> prevCGPA;

        if(prevCGPA < 0.0 || prevCGPA > 4.0)
            cout << "Invalid! CGPA must be between 0.0 and 4.0.\n";

    } while(prevCGPA < 0.0 || prevCGPA > 4.0);

    // Previous Credits Validation
    do {
        cout << "Enter previous credit hours (>=0): ";
        cin >> prevCredits;

        if(prevCredits < 0)
            cout << "Invalid! Credit hours cannot be negative.\n";

    } while(prevCredits < 0);

    double overallCGPA =
        (prevCGPA * prevCredits + totalGradePoints) /
        (prevCredits + totalCredits);

    if(overallCGPA > 4.0)
        overallCGPA = 4.0;

    cout << "\n--- Results ---\n";
    for (int i = 0; i < course; i++) {
        cout << "Course " << i+1 << ": Grade = " << grade[i]
             << ", Credit Hours = " << creditHours[i] << endl;
    }

    cout << "\nSemester GPA: " << semesterGPA;
    cout << "\nOverall CGPA: " << overallCGPA << endl;

    return 0;
}

