#include <iostream>
using namespace std;

class Decrement
{
    int x,y;
    public:
    void accept()
    {
        cout<<"\nEnter two numbers :\n";
        cout<<" ";
        cin>>x;
        cout<<" ";
        cin>>y;
    }
    void operator--()
    {
        x--;
        y--;
    }
    void display()
    {
        cout<<"\n A : "<<x;
        cout<<"\n B : "<<y;
    }
};

int main()
{
    Decrement p;
    p.accept();
    --p;
    cout<<"\n After Decrementing : ";
    p.display();
    return 0;
}