#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class item_record
{
    public:
        int code;
        char name[10];
        float cost;
        int quantity;

        bool operator==(const item_record& i1)
        {
            if(code==i1.code)
            return 1;
            return 0;
        }

        bool operator<(const item_record& i1)
        {
            if(code<i1.code)
            return 1;
            return 0;
        }
};

vector<item_record>x;
void input();
void print(item_record &i1);
void display();
void sort();
void search();

bool compare(const item_record &i1,const item_record &i2)
{
    return i1.cost<i2.cost;
}      

int main()
{
    int choice;
    char ch;
    do
    {
        cout << "\n\nMENU: ";
        cout << "\n\t1.Input item details\n\t2.Display item record\n\t3.Sort item record\n\t4.Search item";

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
                sort();
                break;
                
            case 4:
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
    item_record i1;
    cout<<"\nEnter item code : ";
    cin>>i1.code;
    cout<<"\nEnter item name : ";
    cin>>i1.name;
    cout<<"\nEnter item cost : ";
    cin>>i1.cost;
    cout<<"\nEnter item quantity : ";
    cin>>i1.quantity;
    x.push_back(i1);
}

void print(item_record &i1)
{
    cout<<"\nItem code : "<<i1.code;
    cout<<"\nItem name : "<<i1.name;
    cout<<"\nItem cost : "<<i1.cost;
    cout<<"\nItem quantity : "<<i1.quantity;
}

void display()
{
    for_each(x.begin(),x.end(),print);
}

void sort()
{
    sort(x.begin(),x.end(),compare);
    cout<<"\nSorted on basis of cost : ";
    display();
}

void search()
{
    vector<item_record>::iterator y;
    item_record i1;
    cout<<"\nEnter item code to search : ";
    cin>>i1.code;
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