 /*4.WAP to create two class HighSchool and College with fields like id, stu_name, stu_roll_no, 
 stu_standard, stu_age, stu_contact, stu_edu_institute_name and stu_address. 
 Make suitable setter and getter with use of static data members*/
 
 #include<iostream>
 #include<string.h>
 using namespace std;
 
  class HighSchool{
  	public:
  		static int std_id;
  	    static string std_name,stu_standard;
  	    
  	    void SetSchoolData(){
  	    	    cout << "Enter Std_id : ";
				cin >> std_id;
				
				cout << "Enter Std_Name : ";
				cin >> std_name;
				
				cout << "Enter Std_Standard : ";
				cin >> stu_standard;	  
		  }
		  
		  void GetSchoolData(){
		  	    cout <<endl << "-----------High School Detail-----------" <<endl;
		  	    cout << "Std_Id : " <<std_id <<endl;
		  	    cout << "Std_Name : " <<std_name <<endl;
		  	    cout << "Std_Standard : " <<stu_standard <<endl;
		  }
		
  };
  
 
  int HighSchool::std_id=0;
  string HighSchool::std_name="";
  string HighSchool::stu_standard="";
  
  class College{
  	public:
  	 static int roll_no,stu_age;
  	 static string insti_name,stu_add,stu_cont;
  	 
  	 void SetCollegeData(){
  	 	cout <<endl << "---------College Data---------" <<endl; 
  	 	
  	 	cout << "Enter Roll_no : ";
  	 	cin >> roll_no;
  	 	
  	 	cout << "Enter Stu_age : ";
  	 	cin >> stu_age;
  	 	
  	 	cout << "Enter Stu_Contact : ";
  	 	cin >> stu_cont;
  	 	
  	 	cout << "Enter Stu_Edu_Institute_Name : ";
  	 	cin >> insti_name;
  	 	
  	 	cout << "Enetr Stu_address : ";
  	 	cin >> stu_add;
	   }
	   
	void GetCollegeData(){
		cout <<endl << "------------- College Data -------------" <<endl;
	    cout << "Std_Roll_no : " <<roll_no <<endl;   
	    cout << "Std_age     : " <<stu_age <<endl; 
	    cout << "Stu_Contact : " <<stu_cont <<endl; 
	    cout << "Instit_Name : " <<insti_name <<endl;
		cout << "Std_Address : " <<stu_add <<endl;  
	   }
  };
  
  int College :: roll_no = 0;
  int College :: stu_age = 0;
  string College :: stu_cont = "";
  string College :: insti_name = "";
  string College :: stu_add= "";
  
 int main (){
 	
 	HighSchool h;
 	College c;
 	h.SetSchoolData();
 	c.SetCollegeData();
 	h.GetSchoolData();
 	c.GetCollegeData();
 	
 	return 0;
 }
