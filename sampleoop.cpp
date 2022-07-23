#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

struct state
	{
		char name[20];
        int population;
	};

int main()
{
	state s1{"Maharashtra",201034},s2{"Assam",89038},s3{"Sikkim",59038};
	
	vector<state> v{s1,s2,s3};
	
	vector<state>::iterator it=v.begin();
	
	while(it!=v.end())
	{
		cout<<"State Name : "<<(*it).name<<endl;
		cout<<"State Population : "<<(*it).population<<endl;
		it++;
	}
		
}