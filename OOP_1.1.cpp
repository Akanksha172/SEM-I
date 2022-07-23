#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    fstream file;
    file.open("Akii", ios::out);
    if(file)
    {
        cout<<"File created successfully";
        file<<"Hello World !!!";
        file.close();
    }
    else
    {
        cout<<"Error while creating the file";
    }
    return 0;
}