#include <iostream>
using namespace std;

int size;

struct node
	{
	    int start;
	    int end;
	    int min;
	    int max;
	    int flag;
	    struct node *next;
	}*head;



class appointment_schedule
{
    public:
        void create()
        {
            int i;
            struct node *temp,*last;
            head=NULL;

            cout<<"Enter the no. of slots for a day : ";
            cin>>size;

            for(i=0;i<size;i++)
            {
                temp=new (struct node);
                cout<<"Enter the start time : ";
                cin>>temp->start;
                cout<<"Enter the end time : ";
                cin>>temp->end;
                cout<<"Enter the min duration : ";
                cin>>temp->min;
                cout<<"Enter the max duration : ";
                cin>>temp->max;

                temp->flag=0;
                temp->next=NULL;

                if(head==NULL)
	            {
	                head = temp;
	                last = head;
	            }
                else
	            {
	                last->next=temp;
	                last=last->next;
	            }
            }           
        }

        void display()
        {
            int count=1;
            struct node *temp;

            cout<<"\n\t\t\tAppointment\n\n";
            cout<<"\tSr\tStart\tEnd\tMin\tMax\tStatus";

            temp=head;

            while(temp!=NULL)
	        {
                cout<<"\n\t"<<count;
                cout<<"\t"<<temp->start;
                cout<<"\t"<<temp->end;
                cout<<"\t"<<temp->min;
                cout<<"\t"<<temp->max;
                
                if(temp->flag)
                {
                    cout<<"\t"<<"booked";
                }
                else
                {
                    cout<<"\t"<<"free";
                }
                temp=temp->next;
                count++;
	        }
        }

        void print(int a[],int n)
        {
            int x;
            for(int i=0;i<n;i++)
            {
                //cout<<a[i]<<endl;
                for(int j=i+1;j<n;j++)
                {
                    if (a[i]>a[j])
                    {
                        x=a[i];
                        a[i]=a[j];
                        a[j]=x;
                    }
                }
            }
            for(int i=0;i<n;i++)
            {
                cout<<a[i]<<endl;
            }
        }

        void array(node *head)
        {
            int arr[size];
            int index=0;

            node *curr=head;

            while(curr!=NULL)
            {
                arr[index++]=curr->start;
                curr=curr->next;
            }
            print(arr,size);
        }

};

int main()
{ 
    appointment_schedule x;      
    int choice;
    char ch;
    do
    {
        cout << "\n\nMENU: ";
        cout << "\n\t1.Create an appointment schedule\n\t2.Display Free slots\n\t3.Book an appointment\n\t4.Cancel an appointment\n\t5.Sort slots based on time";

        cout << "\n\nEnter your choice : ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                x.create();
                break;

            case 2:
                x.display();
                break;
                
            case 3:
                x.array(head);
                break;
            
            // case 4:
            //     x.sort();
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