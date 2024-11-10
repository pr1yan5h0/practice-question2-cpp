#include <iostream>
#include <string>
#include <vector>
using namespace std;

template <typename T1, typename T2, typename T3, typename T4>
struct Student {
    T1 name;
    T2 age;
    T3 course;
    T4 department;

    void display() const {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Course: " << course << endl;
        cout << "Department: " << department << endl;
        cout << "--------------------------" << endl;
    }
};

template <typename T1, typename T2, typename T3, typename T4>
void displayAllStudents(const vector<Student<T1, T2, T3, T4>>& students) {
    for (const auto& student : students) {
        student.display();
    }
}

int main() {
    vector<Student<string, int, string, string>> students = {
        {"Alice", 20, "Computer Science", "Engineering"},
        {"Bob", 22, "Mathematics", "Science"},
        {"Charlie", 21, "Physics", "Science"},
        {"Diana", 23, "Chemistry", "Engineering"}
    };

    cout << "Details of all students:" << endl;
    displayAllStudents(students);

    return 0;
}
