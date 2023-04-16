/*2. WAP to create a class which Read and print Student details using Two Classes. (Make two classes, create one class's object in another class.)*/

#include<iostream>
using namespace std;

class Read{
	public:
	char role[5],name[10],marks[5];
	
	void setData(){
		cout << "Enter std Role_no : ";
		cin >> role;
		cout << "Enter std Name : ";
		cin >> name;
		cout << "Enter std Marks :";
		cin >>marks; 
	}
};

class Print{
	public:
		Read r;
		void getData(){
		    
		    cout << "*******Student Details********" <<endl;
			cout << "Role_no : " <<r.role <<endl;
			cout << "Name : " <<r.name <<endl;
			cout << "Marks : " <<r.marks <<endl;	
		}
	
};

int main(){
	Print p;
	p.r.setData();
	p.getData();
	return 0;
}



