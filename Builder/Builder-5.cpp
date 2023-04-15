#include <iostream>
#include <string>

class IndianStates {
    public:
        static const int numStates = 28;
        static const std::string stateNames[];

        static void printStateDetails() {
            for(int i=0; i<numStates; i++) {
                std::cout << stateNames[i] << std::endl;
            }
        }
};

const std::string IndianStates::stateNames[] = {
    "Andhra Pradesh", "Arunachal Pradesh", "Assam", "Bihar", "Chhattisgarh",
    "Goa", "Gujarat", "Haryana", "Himachal Pradesh", "Jharkhand", "Karnataka",
    "Kerala", "Madhya Pradesh", "Maharashtra", "Manipur", "Meghalaya", "Mizoram",
    "Nagaland", "Odisha", "Punjab", "Rajasthan", "Sikkim", "Tamil Nadu",
    "Telangana", "Tripura", "Uttar Pradesh", "Uttarakhand", "West Bengal"
};

int main() {
    IndianStates::printStateDetails();
    return 0;
}

