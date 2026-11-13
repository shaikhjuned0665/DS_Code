#include <iostream>
#include <string>
using namespace std;

class Student {
    int roll;
    string name;
    float marks;
public:
    void input() {
        cout << "Enter roll, name, marks: ";
        cin >> roll >> name >> marks;
    }
    void display() {
        cout << "Roll: " << roll << "  Name: " << name
             << "  Marks: " << marks << endl;
    }
    float getMarks() { return marks; }
};

int main() {
    Student s1, s2;
    s1.input();
    s2.input();

    cout << "\nStudent 1: "; s1.display();
    cout << "Student 2: "; s2.display();

    if (s1.getMarks() > s2.getMarks())
        cout << "\nStudent 1 has higher marks\n";
    else if (s1.getMarks() < s2.getMarks())
        cout << "\nStudent 2 has higher marks\n";
    else
        cout << "\nBoth have equal marks\n";
    return 0;
}