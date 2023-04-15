/*3. WAP to create a class Hotel with fields like id, staff_name , staff_count, room_size, establish_year, address, rating and website.
 Illustrate the use of encapsulation (strict encapsulation) with "this keyword".*/

#include<iostream>
#include<string.h>
 using namespace std;
 
 class Hotel{
 	public:
 	int id,staff_size,es_year,room_size;
 	
 	string name,type;
 	string add,rate;
 	
 		void setId(int id){
 			this->id = id;
		 }
		 
		void setName(string name){
 			this->name = name;
		 }
		 
		void setType(string type){
 			this->type = type;
		 }
		 
		void setstaff_size(int staff_size){
 			this->staff_size = staff_size;
		 }
		 
		void setroom_size(int room_size){
 			this->room_size = room_size;
		 }
		 
		void setes_year(int es_year){
 			this->es_year = es_year;
		 }
		 
		void setadd(string add){
 			this->add = add;
		 }
		 
		void setrate(string rate){
 			this->rate = rate;
		 }
		 
		 //Data get
		void getId(){
 			cout << "Id = " <<id <<endl;
		}
		
		void getName(){
 			cout << "Name = " <<name <<endl;
		 }
		 
		void getType(){
 			cout << "Type = " <<type <<endl;
		 }
		 
		void getstaff_size(){
 			cout << "Staff_Size = " <<staff_size <<endl;
		 }
		 
		void getroom_size(){
 			cout << "room_size = " <<room_size <<endl;
		 }
		 
		void getes_year(){
 			cout << "Establish_year = " <<es_year <<endl;
		 }
		 
		void getadd(){
            cout << "Address = " <<add <<endl; 			
		 }
		 
		void getrate(){
 			cout << "Rateing_year = " <<rate <<endl;
		 }
	
 };
 int main(){
 	int id,staff_size,es_year,room_size;
 	string name,type;
 	string add,rate;
 	
 	Hotel hotel;
 	
	cout << "Enter Hotel Id : ";
 	cin >> id;
 
 	cout << "Enter Hotel Name : ";
 	cin >> name;
 	
	cout << "Enter Type of Room : ";
 	cin >> type;
 	
 	cout << "Enter Staff_size : ";
 	cin >> staff_size;
 	
 	cout << "Enter Room_size : ";
 	cin >> room_size;
 	
 	cout << "Enter Establish_year : ";
 	cin >> es_year;
 	
 	cout << "Enter Address : ";
 	cin >> add;
 	
 	cout << "Enter Rateing_year :";
 	cin >> rate;
 	
 	hotel.setId(id);
 	hotel.setName(name);
 	hotel.setType(type);
 	hotel.setstaff_size(staff_size);
 	hotel.setroom_size(room_size);
 	hotel.setes_year(es_year);
 	hotel.setadd(add);
 	hotel.setrate(rate);
 	
 	
 	hotel.getId();
 	hotel.getName();
 	hotel.getType();
 	hotel.getstaff_size();
 	hotel.getroom_size();
 	hotel.getes_year();
 	hotel.getadd();
 	hotel.getrate();
 	 	
 	return 0;
 } 
