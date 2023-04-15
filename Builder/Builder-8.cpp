#include <iostream>

class Person {
    private:
        std::string name;
    public:
        Person(std::string n) {
            name = n;
            std::cout << name << " constructed." << std::endl;
        }

        ~Person() {
            std::cout << name << " destructed." << std::endl;
        }
};

int main() {
    Person p1("John Doe");
    {
        Person p2("Jane Doe");
    }
    return 0;
}

