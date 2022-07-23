#include<bits/stdc++.h>
using namespace std;
 
class stack_in
{
    public:
    int prec(char c) {
        if(c == '/' || c=='*')
            return 2;
        else if(c == '+' || c == '-')
            return 1;
        else
            return -1;
    }
    
    void infixToPostfix(string s) {
    
        stack<char> st; 
        string result;
    
        for(int i = 0; i < s.length(); i++) {
            char c = s[i];
    
            if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9'))
                result += c;

            else if(c == '(')
                st.push('(');
    
            else if(c == ')') {
                while(st.top() != '(')
                {
                    result += st.top();
                    st.pop();
                }
                st.pop();
            }
    
            else {
                while(!st.empty() && prec(s[i]) <= prec(st.top())) {
                    result += st.top();
                    st.pop(); 
                }
                st.push(c);
            }
        }
    
        while(!st.empty()) {
            result += st.top();
            st.pop();
        }
    
        cout << result << endl;
    }
};

int main() 
{
    stack_in s;
    string exp;

    int choice;
	do
	{
		cout << "\n\nMENU: ";
        cout << "\n\t1.Input Expression\n\t2.Convert the expression from infix to postfix";

        cout << "\n\nEnter your choice : ";
        cin >> choice;

        switch (choice)
        {
            case 1:
				cout<<"enter expression : ";
                cin>>exp;
                break;

            case 2:
                s.infixToPostfix(exp);
                break;
                
            default:
                cout << "Please enter a valid choice";
                break;
		}
		cout<<"\nDo you want to continue?{1/0)";
		cin>>choice;		
	}while(choice!=0);

	return 0;
}