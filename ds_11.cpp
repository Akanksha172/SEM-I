#include <iostream>
using namespace std;
#define n 4

class queue
{
    public:
    string *arr;
    int front;
    int rear;

    queue()
    {
        arr = new string[n];
        front = -1;
        rear = -1;
    }

    void push(string job)
    {
        if(rear == n-1)
        {
            cout<<"Stack Overflow"<<endl;
            return ;
        }
        else
        {
            if(rear==-1)
            {
                front++;
                arr[++rear] = job;
            }
            else
            {
                arr[++rear] = job;
            }
        }       
    }

    void pop()
    {
        if(rear==-1 || front==rear+1)
        {
            cout<<"Stack Underflow"<<endl;
            return ;
        }
        else
        {
            front++;
        }
    }

    void display()
    {
        if(rear==-1 || front>rear)
        {
            cout<<"Stack Underflow"<<endl;
            return ;
        }
        else
        {
            for(int i=front;i<=rear;i++)
            {
                cout<<arr[i]<<" ";
            }
        }
    }
};

int main()
{
    queue q;
    string job;
    int choice;
    
	do
	{
		cout << "\n\nMENU: ";
        cout << "\n\t1.Add job\n\t2.Delete job\n\t2.Display job";

        cout << "\n\nEnter your choice : ";
        cin >> choice;

        switch (choice)
        {
            case 1:
				cout<<"enter job : ";
                cin>>job;
                q.push(job);
                break;

            case 2:
                q.pop();
                break;

            case 3:
                q.display();
                break;
                
            default:
                cout << "Please enter a valid choice";
                break;
		}
		cout<<"\nDo you want to continue?{1/0)";
		cin>>choice;		
	}while(choice!=0);

	return 0;
}