#include <iostream>
using namespace std;

class Student {
    string name;
    int roll;
public:
    // Constructor
    Student(string n, int r) {
        name = n;
        roll = r;
        cout << "Constructor called: " << name << " (Roll " << roll << ")" << endl;
    }

    // Destructor
    ~Student() {
        cout << "Destructor called: " << name << " (Roll " << roll << ")" << endl;
    }

    void display() {
        cout << "Student: " << name << ", Roll: " << roll << endl;
    }
};

int main() {
    cout << "Creating object s1..." << endl;
    Student s1("Rushi", 101);

    cout << "Creating object s2..." << endl;
    Student s2("Ninja", 102);

    cout << "Displaying details..." << endl;
    s1.display();
    s2.display();

    cout << "Program ending, destructors will be called automatically." << endl;
}
