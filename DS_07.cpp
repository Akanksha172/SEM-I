
#include <iostream>
using namespace std;
typedef struct node
{
	int data;
	struct node *next;
	struct node *prev;
}node;

class binary
{

public:
    node *hn,*ln;   
    int a;
	binary()
	{
        hn=NULL; ln=NULL;
	}
    node * create()
    {

        hn=NULL;

		node *nn,*cn;
        cout<<"\nEnter number of bits of binary number : ";
		cin>>a;
		cout<<"Enter binary number : ";
        for(int i=0;i<a;i++)
		{
		    nn=new node;
		    cin>>nn->data;
		    nn->next=NULL;
		    nn->prev=NULL;

		    if(hn==NULL)
            {hn=nn;  ln=nn;}
			
            else
		    {
			    cn=hn;
			    while(cn->next!=NULL)
			    {
				    cn=cn->next;
			    }
                cn->next=nn;
		        nn->prev=cn;
                ln=nn;
		    }
		}
        return hn;
	}

	void disp(node *p)
	{
		node *cn;
		cn=p;
		while(cn!=NULL)
		{
		    cout<<cn->data;
            cn=cn->next;
        }
	}

	void ones()
	{
        cout<<"\nOne's Complement: ";
        node *cn; 
        cn=hn;
		while(cn!=NULL)
		{
			if(cn->data==0)
            {	
                cout<<1;
            }
			else
            { 
                cout<<0;
            }
			cn=cn->next;
		}  
	}

	void twos()
	{
        cout<<"\n2's Complement: ";
        node *cn,*t,*x;
        int flag=0; 
        int m;
		cn=t=ln;
	while(cn!=NULL)
	{
		if(flag==0)
		{
			if(cn->data==0)
            {
			    t->data=0;
            }
			else
			{
			    t->data=1;
			    flag=1;
			}
		}
		else
		{
			if(cn->data==0)
            {
			    t->data=1;
            }
			else 
            {
                t->data=0;
			}
        }
		x=t;
		t=t->prev;
        m=cn->data;
		cn=cn->prev;
	}
	disp(x);
	}
};

int main()
{
	binary obj;
    node *p;


    cout<<"*Menu*\n";
    cout<<"1. Enter Binary Number\n";
    cout<<"2. Display number\n";
    cout<<"3. Calculate One's Complement\n";
    cout<<"4. Calculate Two's Complement\n";
    cout<<"5. Exit\n";

    int ch;
    do{
        cout<<"\nEnter Choice:\t";
        cin>>ch;
        switch(ch)
        {
        case 1: obj.create();
                p=obj.hn; break;
        case 2: cout<<"\nEntered Number is ";
                p=obj.hn;
                obj.disp(p); cout<<endl;break;
        case 3: obj.ones(); cout<<endl; break;
        case 4: obj.twos(); cout<<endl; break;
        case 5: cout<<"Exit.\n"; break;
        default: ch=5; cout<<"Exit.\n"; break;
        }
    }while(ch!=5);

}
