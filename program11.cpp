#include <iostream>
#include <string>
using namespace std;

template <typename T1, typename T2, typename T3, typename T4>
class Student {
private:
    T1 name;
    T2 age;
    T3 course;
    T4 department;

public:
    Student(T1 n, T2 a, T3 c, T4 d)
        : name(n), age(a), course(c), department(d) {}

    void display() const {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Course: " << course << endl;
        cout << "Department: " << department << endl;
    }
};

int main() {
    Student<string, int, string, string> student1("Alice", 20, "Computer Science", "Engineering");
    Student<string, int, string, string> student2("Bob", 22, "Mathematics", "Science");

    cout << "Student 1 details:" << endl;
    student1.display();
    cout << "\nStudent 2 details:" << endl;
    student2.display();

    return 0;
}
