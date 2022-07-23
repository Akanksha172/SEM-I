#include<iostream>
using namespace std;

class complex
{
    int real;
    int img;
    public:
    complex()
    {
        real=0;
        img=0;
    }
    
    complex operator+(complex);
    complex operator*(complex);
    
    friend istream &operator >>(istream &input,complex &t)
    {
        cout<<"Enter the real part : ";
        input>>t.real;
        cout<<"Enter the imaginary part : ";
        input>>t.img;
    }
    
    friend ostream &operator <<(ostream &output,complex&t)
    {
        output<<t.real<<"+"<<t.img<<"i\n";
    }
};

complex complex::operator+(complex c)
{
    complex temp1;
    temp1.real=real+c.real;
    temp1.img=img+c.img;
    return(temp1);
}

complex complex::operator*(complex c)
{
    complex temp2;
    temp2.real=(real*c.real)-(img*c.img);
    temp2.img=(img*c.real)+(real*c.img);
    return (temp2);
}

int main()
{
    complex c1,c2,c3,c4;
    char ans,y,Y;
    int ch;

    cout<<"Default constructor value = ";
    cout<<c1;
    
    cout<<"\nFor the 1st number : \n";
    cin>>c1;
    cout<<"\nFor the 2nd number : \n";
    cin>>c2;
    cout<<"\nThe first number is ";
    cout<<c1;
    cout<<"\nThe second number is ";
    cout<<c2;
    // c3=c1+c2;
    // cout<<"\n1.Addition of two complex numbers is ";
    // cout<<c3;
    // c4=c1*c2;
    // cout<<"\n2.Multiplication of two complex numbers is ";
    // cout<<c4;
    
    do
    {
        cout<<"\nMENU :";
        cout<<"\n1.Addition";
        cout<<"\n2.Multiplication";

        cout<<"\nEnter your choice : "<<endl;
        cin>>ch;
        
        switch(ch)
        {
            case 1:
                c3=c1+c2;
                cout<<"\n1.Addition of two complex numbers is ";
                cout<<c3;
                break;
            
            case 2:
                c4=c1*c2;
                cout<<"\n2.Multiplication of two complex numbers is ";
                cout<<c4;
                break;
                
            default:
            cout<<"Please enter a valid choice";
            break;
        }
        cout<<"\n Do you want to continue (1/0) : ";
        cin>>ch;
    }
    while(ch!=0);
    
    return 0;
}
