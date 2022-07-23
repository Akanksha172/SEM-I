#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    fstream file;
    file.open("Akanksha", ios::in); 
    if(!file)
    {
        cout<<"file does not exist";
    }
    else
    {
        char x;
        while(1)
        {
            file>>x;
            if(file.eof())
                break;
            cout<<x;
        }
    }    
    file.close();
    return 0;
}