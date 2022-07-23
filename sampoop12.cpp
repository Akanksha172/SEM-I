#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class state
{
    public:
        char name[10];
        int population;

        bool operator==(const state& i1)
        {
            if(population==i1.population)
            return 1;
            return 0;
        }

        bool operator<(const state& i1)
        {
            if(population<i1.population)
            return 1;
            return 0;
        }
};

vector<state>x;
void input();
void print(state &i1);
void display();
void search();

bool compare(const state &i1,const state &i2)
{
    return i1.population<i2.population;
}      

int main()
{
    int choice;
    char ch;
    do
    {
        cout << "\n\nMENU: ";
        cout << "\n\t1.Input state name and population\n\t2.Display state name and population\n\t3.Search state population";

        cout << "\n\nEnter your choice : ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                input();
                break;

            case 2:
                display();
                break;
                
            case 3:
                search();
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

void input()
{
    state i1;
    cout<<"\nEnter state name : ";
    cin>>i1.name;
    cout<<"\nEnter state population : ";
    cin>>i1.population;
    x.push_back(i1);
}

void print(state &i1)
{
    cout<<"\nState name : "<<i1.name;
    cout<<"\nState population : "<<i1.population;
}

void display()
{
    for_each(x.begin(),x.end(),print);
}

void search()
{
    vector<state>::iterator y;
    state i1;
    cout<<"\nEnter state name to search : ";
    cin>>i1.name;
    y=find(x.begin(),x.end(),i1);
    if(y==x.end())
    {
        cout<<"\nNot found";
    } 
    else
    {
        cout<<"Found";
    }
}

