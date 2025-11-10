#ifndef CLASS_HPP
#define CLASS_HPP

#include <string>
#include <vector>

using namespace std;

class Class{
    private:
        string courseName;
        int courseNumber;
        vector<int> sections;
        int maxAttendence;
        int enrolledStudents; 

    public:
        Class(string name, int number, vector<int> CRNs, int maxA, int enrolled);

        friend ostream &operator<<(ostream &out, const Class &c);

        bool operator<(const Class &c) const;
        
        Class operator+(const Class &c) const;
};
#endif