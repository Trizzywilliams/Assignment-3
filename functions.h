# include <iostream>
# include <string>


//***********************************************

using namespace std;
//*********************************** Stucture****************************************************
struct courcse
 {
		string coursecode;
		string coursename;
		int examscore;
};	
	
struct Students 
{
	int IDnumber;
	string firstname;
	string lastname;
	string gender;
	
	courcse eachstudent[2];

};
//***********************Global Var*****************************************
int size = 5;
//************************FUNCTIONS******************************************
bool loginScreen();
int mainMenu();
Students * enterStudent(Students pupil[], int size);
void PrintStudent(Students pupil[], int size);
//***************************************************************************


//*************************ENTER STUDENT INFO****************************************************
Students * enterStudent(Students pupil[], int size)
{
	for (int m = 0; m < size; m++)
	{
		cout << "Enter Student" <<endl<<endl;
		
		cout<<"Enter Id Number"<<endl;
		cin>>pupil[m].IDnumber;
	
		cout << "Student First Name" << endl;
        cin>> pupil[m].	firstname;
       
	    cout << "Student Last Name" << endl;
    	cin >> pupil[m].lastname;
    
		cout << "Student Gender" << endl;
    	cin >>pupil[m].gender;
    	cout<<"----------------------------------------------------------------"<<endl;
	
		for (int n = 0; n < 2; n++)
		{
			cout<<"Enter Course Information"<<endl<<endl;
			
			cout<<"Enter Courcse Name"<<endl;
			cin>>pupil[m].eachstudent[n].coursename;
			
			cout<<"Enter Course Code"<<endl;
			cin>>pupil[m].eachstudent[n].coursecode;
			
			cout<<"Enter Exam Score"<<endl;
			cin>>pupil[m].eachstudent[n].examscore;
			cout<<"------------------------------------------------------------"<<endl;
			
	}
}
	return pupil;
}


//***********************************PRINT STUDENT***************************************
void PrintStudent(Students pupil[], int size)
{	
	
	cout<<"STUDENT INFORMATION"<<endl<<endl;
	
	for(int i =0; i < size; i++)
	{
		cout<<"Student ID Number: "<<pupil[i].IDnumber<<endl;
		cout<<"Enter First Name "<<pupil[i].firstname<<endl;
		cout<<"Enter Last Name"<<pupil[i].lastname<<endl;
		cout<<"Enter The Students Gender M/F "<<pupil[i].gender<<endl;
		cout<<"---------------------------------------------------------------"<<endl;
		
		for(int x = 0; x < 2; x++)
			{
			cout<<"Course Name: "<<pupil[i].eachstudent[x].coursename<<endl;
			cout<<"course code: "<<pupil[i].eachstudent[x].coursecode<<endl;
			cout<<"Test Score: "<<pupil[i].eachstudent[x].examscore<<endl;
			cout<<"--------------------------------------------------------"<<endl;
	}
	

		}
	system("PAUSE");	
}

//***************************************MAIN MENU*************************************

int mainMenu()
{
//**************** Variables ************************************
	Students pupil[size];
	Students *ptrpupil;
	int  option;
//***************************************************
	cout<<"\tSCHULE EVENING INSTITUTE\t\n"<<endl;
	cout<<"\t\t MAIN MENU\t\t\n\n";
	cout<<"[1] Student Details With Grades "<<endl;
	cout<<"[2] Print All Student Details "<<endl;
	cout<<"[3] Print Top Student Details "<<endl;
	cout<<"[4] Log of"<<endl;
	cout<<"[5] Exit "<<endl<<endl;
	
	cout<<"ENTER OPTION [1-5]"<<endl;
	cin>>option;
	
	
	
	
	
	switch (option)
	{
		case 1:
		{
			enterStudent(pupil,size);
			mainMenu();	
			break;
		}
			
		
		case 2:
		{
			PrintStudent (pupil, size);
			mainMenu();
			break;
		}
		
		
		case 3:
		{	// print top students
			break;
		}
			
		
		
		case 4:{
				loginScreen();
			break;
		}
	
		case 5:	{
			return 0;

		}
		
		
		default:{
			cout<<"Invalid option enter An Number Between 1 and 5"<<endl<<endl;
			mainMenu();
			break;
		}
	}
}




//*********************************LOGIN SCREEN****************************
bool loginScreen()
{	
	bool j;
	int password;
	string username;
	cout<<"\t\t\t LOGIN SCREEN \n\n";
	cout<<"Enter your username: ";
	cin>>username;
	
	cout<<"Enter your password: ";
	cin>>password;
	
	if (username != "admin" && password != 1234)
	{
		j = false;
		cout<<"Wrong Username or  Password"<<endl<<endl;
		loginScreen();
	}else if (username == "admin" && password == 1234){
		j = true;
		mainMenu();
	}
	return j;
}

//****************************HIGHEST STUDENT**************************
Students higheststud(Students pupil[], int size)
{
	
	Students bigscore;//= pupil [0];
	
	for (int c = 0; c < size; c++)
	{
	
		{
			
		}
	}
}















