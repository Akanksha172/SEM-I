#include<iostream>
#include<fstream>
using namespace std;

//To create a text file
void create()
{
    fstream file;
    file.open("Akanksha.txt", ios::out);
    if(file)
    {
        cout<<"File created successfully";
        file.close();
    }
    else
    {
        cout<<"Error while creating the file";
    }
}

//To write the file
void write()
{
    fstream file;
    file.open("Akanksha.txt", ios::out);
    file<<"Hello World !!! ";
    cout<<"File written successfully";
    file.close();//To close the file
}

//To open the file
void open()
{
    fstream file;
    file.open("Akanksha.txt", ios::in); 
    cout<<"File opened successfully";
}

//To read the file
void read()
{
    fstream file;
    file.open("Akanksha.txt", ios::in); 
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
    file.close();//To close the file
}

int main()
{
    int choice;
    char ch;

    do
    {
        cout << "\n\nMENU: ";
        cout << "\n\t1.Create File\n\t2.Write File\n\t3.Open File\n\t4.Read File";
        cout << "\n\nEnter your choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "";
            cout << "\n";
            create();
            break;

        case 2:
            cout << "";
            cout << "\n";
            write();
            break;
            
        case 3:
            cout << "";
            cout << "\n";
            open();
            break;

        case 4:
            cout << "";
            cout << "\n";
            read();
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