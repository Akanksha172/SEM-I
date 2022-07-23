#include <iostream>
using namespace std;
class number2;
class number1
{
    public:
    int x=6;
    friend int operator<(number1 a,number2 b);
};
class number2
{
    public:
    int y=8;
    friend int operator<(number1 a,number2 b);
};

int operator<(number1 a,number2 b)
{
    if(a.x<b.y)
        return 1;
    else
        return 0;
}

int main()
{
    number1 n1;
    number2 n2;
    if(n1<n2)
    {
        cout<<"number1 is less than number2\n";
    }
    else
    {
        cout<<"number1 is greater than number2\n";
    }
    return 0;
}