#include <iostream>
#include <string>
#include<cstring>
using namespace std;

class StudData;

class Student
{
	string name;
	int roll_no;
	string cls;
	char *division;
	string dob;
	char *bloodgroup;
	static int count;

  public:
	Student() // Default Constructor
	{
		name = "";
		roll_no = 0;
		cls = "";
		division = new char;
		dob = "dd/mm/yyyy";
		bloodgroup = new char[4];
	}

	~Student()
	{
		delete division;
		delete[] bloodgroup;
	}

	static int getCount()
	{
		return count;
	}

	void getData(StudData *);
	void dispData(StudData *);
};

class StudData
{
	char caddress[30];
	char telno[15];
	char dlno[10];
	friend class Student;

  public:
	StudData()
	{

		strcpy(caddress,"");
		strcpy(telno,"");
		strcpy(dlno,"");
	}

	void getStudData()
	{

		cout << "Enter Contact Address : ";
		cin >>this->caddress;
		cout << "Enter Telephone Number : ";
		cin >> this->telno;
		cout << "Enter Driving License Number : ";
    	cin >> this->dlno;
	}

};

inline void Student::getData(StudData *st)
{
	cout << "Enter Student Name : ";
	cin.get();
	getline(cin, name);
	cout << "Enter Roll Number : ";
	cin >> roll_no;
	cout << "Enter Class : ";
	cin.get();
	getline(cin, cls);
	cout << "Enter Division : ";
	cin >> division;
	cout << "Enter Date of Birth : ";
	cin.get();
	getline(cin, dob);
	cout << "Enter Blood Group : ";
	cin >> bloodgroup;
	st->getStudData();
	count++;
}

inline void Student::dispData(StudData *obj)
{
    cout <<name << "\t\t" << roll_no << "\t   " << cls << "\t " << division << "\t        " << dob << "\t\t" << bloodgroup <<"\t\t"<<obj->caddress<<"\t\t  "<< obj->telno<<"\t\t            "<<obj->dlno<<endl;
}

int Student::count;

int main()
{
	Student *stud1[100];
	StudData *stud2[100];
	int n = 0,choice;
	char ch;

	do
	{
		cout << "\n\nMENU: ";
        cout << "\n\t1.Input Data\n\t2.Display Data";
        cout << "\n\nEnter your choice: ";
        cin >> choice;
        switch (choice)
        {
        	case 1:

        	cout << "ENTER THE DETAILS";
            cout << "\n";
            do
            {
            	stud1[n] = new Student;
            	stud2[n] = new StudData;
            	stud1[n]->getData(stud2[n]);
            	n++;
            	cout << endl<<"Do you want to add another student (y/n) : ";
            	cin >> ch;
            	cin.get();
            } while (ch == 'y' || ch == 'Y');
            break;
            
            case 2:
            cout << "\n-----------------------------------------------------------------------------------------------------------------------------------------------------"<<endl;
            cout << "Student Name\t"<< "Roll Number\t"<< "Class\t"<< "Division\t"<< "Date of Birth\t"<< "Blood Group\t"<< "Contact Address" <<"   Telephone Number"<<"   Driving License Number"<<endl;
            cout<<"-----------------------------------------------------------------------------------------------------------------------------------------------------"<<endl;
            
            for (int i = 0; i < n; i++)
            {
            	stud1[i]->dispData(stud2[i]);
            }
            
            cout << "-----------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
            cout << "Total Students : " <<
            Student::getCount();
            cout << endl<< "-----------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
            
            for (int i = 0; i < n; i++)
            {
            	delete stud1[i];
            }break;
        }
            cout << "\n\nDo you want to go to main menu?(y/n): ";
            cin >> ch;
            cin.ignore(1, '\n');
    } while (ch == 'y' || ch == 'Y');

	return 0;
}