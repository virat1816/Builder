#include <iostream>
#include <string>

class Person {
    private:
        std::string name;
        int age;
    public:
        Person(std::string n, int a) {
            name = n;
            age = a;
        }

        void display() {
            std::cout << "Name: " << name << std::endl;
            std::cout << "Age: " << age << std::endl;
        }
};

int main() {
    Person p1("John Doe", 25);
    Person p2("Jane Doe", 30);
    p1.display();
    p2.display();
    return 0;
}

