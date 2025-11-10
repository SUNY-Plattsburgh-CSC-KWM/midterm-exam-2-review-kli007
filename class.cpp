#include <C:\Users\likev\OneDrive - plattsburgh.edu\SchoolWork\2025-6 Fall\OODesign\review\class.hpp>
#include <iostream> 
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

Class::Class(string name, int number, vector<int> CRNs, int maxA, int enrolled){
    courseName = name;
    courseNumber = number;
    sections = CRNs;
    maxAttendence = maxA;
    enrolledStudents = enrolled;
}

ostream &operator<<(ostream &out, const Class &c){
    out << "Course Name: " << c.courseName 
        << "\nCourse Number: " << c.courseNumber
        << "\nCourse Max Attendence: " << c.maxAttendence
        << "\nCourse Enrolled Students: " << c.enrolledStudents
        << "\n Course Sections: ";

    for (auto &s: c.sections){
        out << "\n" << s;
    }

    return out; 
}

bool Class::operator<(const Class &c) const {
    return this->enrolledStudents < c.enrolledStudents;
}

Class Class::operator+(const Class &c) const {
    Class merged = *this;
    merged.sections.insert(
        merged.sections.end(), 
        c.sections.begin(), 
        c.sections.end());
    
    sort(merged.sections.begin(), merged.sections.end());

    return merged;
}





