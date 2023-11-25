#include <bits/stdc++.h>
using namespace std;

struct GPA {
    double grade;
    double creditHour;
};

double calculateCGPA(double calculatedCG) {
    return 0.00;
}

int main() {
    cout << "Welcome to Easy CGPA Calculator. \n Calculate your CGPA here" << endl;

    struct GPA gpa;

    cout << "Enter number of Semester: ";
    int totalSemester, totalCourses;
    cin >> totalSemester;

    while(totalSemester--) {
        cout << "Enter number of Courses: ";
        cin >> totalCourses;

        for(int i=1; i<=totalCourses; i++) {
            cout << "Grade and Credit Hour of Course " << i << " = "; 
            cin >> gpa.grade >> gpa.creditHour;
        }
        
    }

    for(int i=1; i<=totalSemester; i++) {
        cout << "Your Result in Semester " << i << ": "; 
        for(int i=1; i<=totalCourses; i++) {
            cout << "Course " << i << ", " << "Grade" << gpa.grade << ", " << "Credit Hour " << gpa.creditHour << ", " << "CGPA : " << calculateCGPA(5.00) << endl;;
            cin >> gpa.grade >> gpa.creditHour;
        }
        
    }

    return 0;
}