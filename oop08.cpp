#include <iostream>
using namespace std;

template <class T>
T selection_sort()
{
    T A[10];
    T temp;
    for(int i=0;i<8;i++)
        {
            cout << "Enter the numbers : ";
            cin >> A[i];
        }
    for(int i=0;i<8;i++)
    {
        for(int j=i+1;j<8;j++)
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

int main()
{        
    int choice;
    char ch;
    do
    {
    cout << "\n\nMENU: ";
        cout << "\n\t1.Integer Array\n\t2.Float Array";
        cout << "\n\nEnter your choice : ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            selection_sort<int>();
            break;

        case 2:
            selection_sort<float>();
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

/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int i,x;
    int arr[x];
    cin>>x;
    for(i=0;i<x;i++)
    {
        cin>>arr[i];
    }
    int key;
    cin>>key;
    for(i=0;i<x;i++)
    {
        if(arr[i]==key)
        {
            cout<<"found";
        }
    }

    return 0;
}
