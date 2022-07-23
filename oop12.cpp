#include<iostream>
#include<map>
#include<string>
using namespace std;

class MAP
{
    public:
    map<string,int>m;
	string key;
	int value;

    void accept()
    {
		cout<<"Enter the state name : ";
		cin>>key;
		cout<<"Enter the population of the state : ";
		cin>>value;
		m[key]=value;
    }
	
	void display()
	{
		cout<<"Enter the state whose population is to be searched : ";
		cin>>key;
		if(m[key]==0)
		{
			cout<<"The state you have entered is not in the input data !!! "<<endl;
		}
		else
		{
		    cout<<m[key];
		}
	} 
};	

int main()
{ 
    MAP x;      
    int choice;
    char ch;
    do
    {
        cout << "\n\nMENU: ";
        cout << "\n\t1.Input State and its Population\n\t2.Display the population of searched state";

        cout << "\n\nEnter your choice : ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                x.accept();
                break;

            case 2:
                x.display();
                break;
                
            default:
                cout << "Please enter a valid choice";
                break;
        }
        cout << "\n\nDo you want to go to main menu?(y/n): ";
        cin >> ch;
    } while (ch == 'y' || ch == 'Y');
    return 0;    
}
