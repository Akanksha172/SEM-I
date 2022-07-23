#include <iostream>
using namespace std;

template <class T>
T selection_sort()
{
    T A[10];
    T temp;
    for(int i=0;i<5;i++)
    {
        for(int j=i+1;j<5;j++)
        {
            if(A[j]<A[i])
            {  
                temp=A[i];
                A[i]=A[j];
                A[j]=temp;   
            }
        }
    }
    cout<<"\nSorted Array : \n";
    for(int i=0;i<8;i++)
    {
        cout<<A[i]<<"   ";
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
    //int A[5];
    // float B[5];
    //char C[5];

    database p;

    int i;         
    int choice;
    char ch;
    do
    {
    cout << "\n\nMENU: ";
        cout << "\n\t1.Accept students roll numbers,students percentage and students name\n\t2.Display students roll numbers,students percentage and students name";
        cout << "\n\nEnter your choice : ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            // for(i=0;i<5;i++)
            // {
            //     cout << "Enter the students roll numbers : ";
            //     cin >> A[i];
            // }
            // for(i=0;i<5;i++)
            // {
            //     cout << "Enter the students percentage in % : ";
            //     cin >> B[i];
            // }
            p.read();
            selection_sort<int>();
            break;

        case 2:
            // cout<<"\nSorted Array : \n";
            // for(int i=0;i<8;i++)
            // {
            //     cout<<A[i]<<"   ";
            // }
            // selection_sort<int>();
            // selection_sort(A);
            // selection_sort(B);
            //selection_sort(C);
            break;

        // case 3:

            
        default:
            cout << "Please enter a valid choice";
            break;
        }
        cout << "\n\nDo you want to go to main menu?(y/n): ";
        cin >> ch;
    } while (ch == 'y' || ch == 'Y');
    return 0;    
}