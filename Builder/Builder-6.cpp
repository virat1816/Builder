#include <iostream>

class MyClass {
    private:
        int myInt;
        float myFloat;
        char myChar;
    public:
        MyClass() {
            myInt = 0;
            myFloat = 0.0f;
            myChar = 'a';
        }
        void printData() {
            std::cout << "myInt = " << myInt << std::endl;
            std::cout << "myFloat = " << myFloat << std::endl;
            std::cout << "myChar = " << myChar << std::endl;
        }
};

int main() {
    MyClass obj1;
    obj1.printData();
    return 0;
}

