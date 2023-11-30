// All Headers
#include <bits/stdc++.h>
using namespace std;

// Function to find Grade from marks
string marksToGrade(double marks) {
    if (marks >= 80) {
        return "Grade: A+";
    } else if (marks>=75 && marks<=79) {
        return "Grade: A";
    } else if (marks>=70 && marks<=74) {
        return "Grade: A-";
    } else if (marks>=65 && marks<=69) {
        return "Grade: B+";
    } else if (marks>=60 && marks<=64) {
        return "Grade: B";
    } else if (marks>=55 && marks<=59) {
        return "Grade: B-";
    } else if (marks>=50 && marks<=54) {
        return "Grade: C+";
    } else if (marks>=45 && marks<=49) {
        return "Grade: C";
    } else if (marks>=40 && marks<=44) {
        return "Grade: C-";
    } else {
        return "Grade: F";
    }
}