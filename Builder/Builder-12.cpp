#include <iostream>
#include <string>

class Bank {
    private:
        std::string name;
        std::string accountNumber;
        float balance;
    public:
        Bank() {
            name = "";
            accountNumber = "";
            balance = 0.0f;
        }

        void createAccount() {
            std::cout << "Enter name: ";
            std::cin >> name;
            std::cout << "Enter account number: ";
            std::cin >> accountNumber;
            std::cout << "Enter initial balance: ";
            std::cin >> balance;
            std::cout << "Account created successfully!" << std::endl;
        }

        void deposit() {
            float amount;
            std::cout << "Enter amount to deposit: ";
            std::cin >> amount;
            balance += amount;
            std::cout << "Amount deposited successfully!" << std::endl;
        }

        void withdraw() {
            float amount;
            std::cout << "Enter amount to withdraw: ";
            std::cin >> amount;
            if (balance >= amount) {
                balance -= amount;
                std::cout << "Amount withdrawn successfully!" << std::endl;
            } else {
                std::cout << "Insufficient balance!" << std::endl;
            }
        }

        void checkBalance() {
            std::cout << "Name: " << name << std::endl;
            std::cout << "Account number: " << accountNumber << std::endl;
            std::cout << "Balance: " << balance << std::endl;
        }
};

int main() {
    Bank b;
    int choice;
    do {
        std::cout << "\nBank Management System" << std::endl;
        std::cout << "1. Create new account" << std::endl;
        std::cout << "2. Deposit money" << std::endl;
        std::cout << "3. Withdraw money" << std::endl;
        std::cout << "4. Check balance" << std::endl;
        std::cout << "5. Exit" << std::endl;
        std::cout << "Enter choice: ";
        std::cin >> choice;
        switch (choice) {
            case 1:
                b.createAccount();
                break;
            case 2:
                b.deposit();
                break;
            case 3:
                b.withdraw();
                break;
            case 4:
                b.checkBalance();
                break;
            case 5:
                std::cout << "Thank you for using our system!" << std::endl;
                break;
            default:
                std::cout << "Invalid choice. Please try again." << std::endl;
                break;
        }
    } while (choice != 5);

    return 0;
}

