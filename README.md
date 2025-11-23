# CodeAlpha_CGPACalculator
GPA & CGPA Calculator (C++)

A simple C++ program that calculates your semester GPA and overall CGPA based on course grades and credit hours. The program includes input validation to ensure accurate data entry and supports combining previous CGPA with the current semester’s results.

Features

Validates number of semesters and courses.
Supports courses with 1, 2, or 3 credit hours.
Validates grades based on credit hours:
3 credit hours: 0.0 – 12.0
2 credit hours: 0.0 – 8.0
1 credit hour: 0.0 – 4.0
Calculates Semester GPA.
Calculates Overall CGPA using previous CGPA and credits.
Caps GPA and CGPA at 4.0 for standardization.
Shows a detailed breakdown of each course, grade, and credit hours.

Installation

Clone the repository:
git clone https://github.com/your-username/gpa-cgpa-calculator.git
Open the project in any C++ IDE (e.g., Code::Blocks, Visual Studio, or Dev C++).
Compile and run main.cpp.

Usage

Enter the number of semesters (must be > 0).
Enter the number of courses for the semester (must be > 0).
Enter credit hours (1, 2, or 3) for each course.
Enter grades for each course (validated according to credit hours).
Enter previous CGPA and previous total credit hours.
View semester GPA, overall CGPA, and course-wise details.

Example Output
<img width="1096" height="889" alt="image" src="https://github.com/user-attachments/assets/e01184ae-e025-416f-88d5-6edc33861cd4" />
