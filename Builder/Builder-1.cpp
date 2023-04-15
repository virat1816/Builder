/*1. WAP to create a class Employee with setter and getter. Which have fields like id, name, role, salary, experience, address, email and contact.
 Get 3 records.*/

#include <iostream>
#include <string>

using namespace std;

class Employee {
private:
    int id;
    string name;
    string role;
    double salary;
    int experience;
    string address;
    string email;
    string contact;

public:
    void setId(int id) {
        this->id = id;
    }

    int getId() {
        return id;
    }

    void setName(string name) {
        this->name = name;
    }

    string getName() {
        return name;
    }

    void setRole(string role) {
        this->role = role;
    }

    string getRole() {
        return role;
    }

    void setSalary(double salary) {
        this->salary = salary;
    }

    double getSalary() {
        return salary;
    }

    void setExperience(int experience) {
        this->experience = experience;
    }

    int getExperience() {
        return experience;
    }

    void setAddress(string address) {
        this->address = address;
    }

    string getAddress() {
        return address;
    }

    void setEmail(string email) {
        this->email = email;
    }

    string getEmail() {
        return email;
    }

    void setContact(string contact) {
        this->contact = contact;
    }

    string getContact() {
        return contact;
    }
};

int main() {
    Employee emp[5];

    for (int i = 0; i < 5; i++) {
        cout << "Enter employee " << i + 1 << " details:" << endl;

        int id;
        string name;
        string role;
        double salary;
        int experience;
        string address;
        string email;
        string contact;

        cout << "ID: ";
        cin >> id;
        emp[i].setId(id);

        cout << "Name: ";
        cin.ignore();
        getline(cin, name);
        emp[i].setName(name);

        cout << "Role: ";
        getline(cin, role);
        emp[i].setRole(role);

        cout << "Salary: ";
        cin >> salary;
        emp[i].setSalary(salary);

        cout << "Experience: ";
        cin >> experience;
        emp[i].setExperience(experience);

        cout << "Address: ";
        cin.ignore();
        getline(cin, address);
        emp[i].setAddress(address);

        cout << "Email: ";
        getline(cin, email);
        emp[i].setEmail(email);

        cout << "Contact: ";
        getline(cin, contact);
        emp[i].setContact(contact);

        cout << endl;
    }

    cout << "Employee Details:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Employee " << i + 1 << endl;
        cout << "ID: " << emp[i].getId() << endl;
        cout << "Name: " << emp[i].getName() << endl;
        cout << "Role: " << emp[i].getRole() << endl;
        cout << "Salary: " << emp[i].getSalary() << endl;
        cout << "Experience: " << emp[i].getExperience() << endl;
        cout << "Address: " << emp[i].getAddress() << endl;
        cout << "Email: " << emp[i].getEmail() << endl;
        cout << "Contact: " << emp[i].getContact() << endl;
        cout << endl;
    }

    return 0;
}

