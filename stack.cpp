#include <iostream>
#define MAX 4
using namespace std;

int top=-1;
int stack_arr[MAX];

void push(int data)
{
    if (top==MAX-1)
    {
        cout<<"Stack overflow";
        return;
    }
    top=top+1;
    stack_arr[top]=data;
}

void display()
{
    for(int i=top;i>=0;i--)
    {
        cout<<stack_arr[i];
    }
}

int main()
{
    push(1);
    push(2);
    push(3);
    push(4);
    display();
    return 0;
}