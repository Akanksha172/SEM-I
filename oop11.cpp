#include <iostream>
using namespace std;

int no_item;

class item_records
{
    protected:
        int code;
        string name;
        float cost;
        int quantity;
    //int a[no_item];

    public:
        void item_details()
        {
            for(int i=1;i<=no_item;i++)
            {
                cout<<"Enter item code : ";
                cin>>code;
                cout<<"Enter item name : ";
                cin>>name;
                cout<<"Enter item cost : "; 
                cin>>cost;
                cout<<"Enter item quantity : ";
                cin>>quantity;
            }
        }
        void display()
        {
            //cout<<"\nITEM CODE\t\tITEM NAME\t\tITEM COST\t\tITEM QUANTITY"<<endl;
            for(int i=1;i<=no_item;i++)
            {
                cout<<code<<endl;
                cout<<name<<endl;
                cout<<cost<<endl;
                cout<<quantity<<endl;
            }
        }
};

int main()
{
    int choice;
    char ch;
    item_records p;

    cout<<"\n"<<endl;
    cout<<"---ITEM RECORDS---\n\n"<<endl;

    cout<<"Enter the no. of items : ";
    cin>>no_item;

    do
    {
        cout<<"\n\tMENU"<<endl;
        cout<<"\t1.Input Item Details\n\t2.Display Item Details\n\t"<<endl;

        cout<<"Enter your choice : ";
        cin>>choice;

        switch (choice)
        {
            case 1:
                p.item_details();
                break;
                
            case 2:
                p.display();
                break;

            default:
                cout<<"Please enter a valid choice";
                break;

        }cout << "\n\nDo you want to go to main menu?(y/n): ";
        cin >> ch;
        cin.ignore(1, '\n');
    } while (ch == 'y' || ch == 'Y');
    return 0;
}