#include <iostream>
#include <string>

class Student {
    private:
        std::string name;
        int rollNumber;
        float marks;
    public:
        void getDetails() {
            std::cout << "Enter name, roll number, and marks: ";
            std::cin >> name >> rollNumber >> marks;
        }

        void displayDetails() {
            std::cout << "Name: " << name << std::endl;
            std::cout << "Roll number: " << rollNumber << std::endl;
            std::cout << "Marks: " << marks << std::endl;
        }
};

int main() {
    int n;
    std::cout << "Enter the number of students: ";
    std::cin >> n;
    Student students[n];
    for (int i = 0; i < n; i++) {
        std::cout << "Enter details of student " << i + 1 << std::endl;
        students[i].getDetails();
    }
    std::cout << "Details of all students:" << std::endl;
    for (int i = 0; i < n; i++) {
        std::cout << "Details of student " << i + 1 << std::endl;
        students[i].displayDetails();
    }
    return 0;
}

