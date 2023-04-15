#include <iostream>
#include <string>

class Train {
    private:
        int number;
        std::string name;
        std::string source;
        std::string destination;
        std::string time;
    public:
        void getDetails() {
            std::cout << "Enter train number, name, source, destination, and time: ";
            std::cin >> number >> name >> source >> destination >> time;
        }

        void displayDetails() {
            std::cout << "Train number: " << number << std::endl;
            std::cout << "Train name: " << name << std::endl;
            std::cout << "Source: " << source << std::endl;
            std::cout << "Destination: " << destination << std::endl;
            std::cout << "Time: " << time << std::endl;
        }

        int getNumber() {
            return number;
        }
};

int main() {
    const int MAX_TRAINS = 3;
    Train trains[MAX_TRAINS];
    for (int i = 0; i < MAX_TRAINS; i++) {
        std::cout << "Enter details of train " << i + 1 << std::endl;
        trains[i].getDetails();
    }
    std::cout << "Enter train number to search: ";
    int searchNumber;
    std::cin >> searchNumber;
    bool found = false;
    for (int i = 0; i < MAX_TRAINS; i++) {
        if (trains[i].getNumber() == searchNumber) {
            trains[i].displayDetails();
            found = true;
            break;
        }
    }
    if (!found) {
        std::cout << "Train not found." << std::endl;
    }
    return 0;
}

