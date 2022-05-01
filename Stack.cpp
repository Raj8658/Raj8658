#include <iostream>
using namespace std;
class stack
{
    public:
    int top=-1;
    int a[100];
    int n=100;
    void push(int val)
    {
        if (top>=n-1)
        cout<<"Stack Overflow"<<endl;
        else{
            top++;
            a[top]=val;
            cout<<val<<" Pushed Successfully"<<endl;
        }
    }
    void pop()
    {
        if (top<=-1)
        cout<<"Stack Underflow"<<endl;
        else{
            cout<<a[top]<<" Popped Successfully"<<endl;
            top--;
        }
    }
    void display()
    {
        if (top>=0)
        {
            cout<<"Stack Elements are: "<<endl;
            for (int i=(top); i>=0; i--)
            {
                cout<<a[i]<<" ";
                cout<<endl;
            }
        }
        else
        cout<<"Stack Underflow"<<endl;
    }
};
int main()
{
    stack stk;
    int option, n;
    do
    {
        cout<<"0 for exit: "<<endl;
        cout<<"1 for push: "<<endl;
        cout<<"2 for pop: "<<endl;
        cout<<"3 for display: "<<endl;
        cin>>option;
        switch (option)
        {
        case 0:
            break;
            case 1:
            cout<<"Which element u want to insert: "<<endl;
            cin>>n;
            stk.push(n);
            break;
            case 2:
            stk.pop();
            break;
            case 3:
           stk.display();
           break; 
        
        default:
        cout<<"Invalid Choice"<<endl;
            break;
        }
    } while (option!=0); 
}
