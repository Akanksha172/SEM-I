#include <iostream>
using namespace std;
int n;

template <class T>
void selection_sort(T A[5])
{
T temp;
for(int i=0;i<5;i++)
{
    for(int j=i+1;j<5;j++)
    {
        if(A[j]<A[i])
        temp=A[i];
        A[i]=A[j];
        A[j]=temp;
    }
}
}

class database 
{
protected:
    int A[5];

public:

    void read()
    {
    for(int i=0;i<5;i++)
    {
        cout << "Enter the students roll numbers : ";
        cin >> A[i];
    }
    }
};

int main()
{
    int A[5];
    database p;
    int choice;
    char ch;
    do
    {
    cout << "\n\nMENU: ";
        cout << "\n\t1.Accept students roll numbers,students percentage and students name\n\t2.Display students roll numbers\n\t3.Display students percentage\n\t4.Display students name";
        cout << "\n\nEnter your choice : ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            p.read();
            selection_sort<int>(A);
            cout<<"\nSorted Array : \n";
            for(int i=0;i<5;i++)
            {
                cout<<A[i]<<"   ";
            }
            break;

        // case 2:
        //     selection_sort(A);
        //     break;
        
        // case 3:
        //     // selection_sort(B);
        //     break;
        
        // case 4:
        //     // selection_sort(C);
        //     break;
            
        default:
            cout << "Please enter a valid choice";
            break;
        }
        cout << "\n\nDo you want to go to main menu?(y/n): ";
        cin >> ch;
    } while (ch == 'y' || ch == 'Y');
    return 0; 
}