#include<iostream>
#include<string.h>

using namespace std;
class train  {
	private:
		int Train_Number;
		char Train_Name[100];
		char Source[100];
		char Destination[100];
		char Train_Time[100];


	public: 
        void setdata(){
        	cout<<endl<<"enter Train Number :  ";
        	cin>>Train_Number;
        	cout<<"enter Train Name :  ";
        	cin>>Train_Name;
        	cout<<"enter Source  :  ";
        	cin>>Source;
        	cout<<"enter Destination  :  ";
        	cin>>Destination;
        	cout<<"enter Train Time  :  ";
        	cin>>Train_Time;
		}
		void getdata(){
			cout<<endl<<"enter Train Number :  "<<Train_Number<<endl;
        	cout<<"enter Train Name :  "<<Train_Name<<endl;
        	cout<<"enter Source  :  "<<Source<<endl;
        	cout<<"enter Destination  :  "<<Destination<<endl;
        	cout<<"enter Train Time  :  "<<Train_Time<<endl;
		}
};

int main(){
	int x;
	train arr[3];
	for(x=0;x<3;x++){
		arr[x].setdata();
	}
	for(x=0;x<3;x++){
		if(arr)
		arr[x].getdata();
	};	int tnumber;
	cout<<"enter train number : ";
	cin>>tnumber;



	return 0;
}

