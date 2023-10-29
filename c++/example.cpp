#include<iostream>
using namespace std;
int top=-1;
int arr[50];

int push(int val)
{
    if(top>49)
    {
        cout<<"stack overflow";
    }
    else{
        top++;
        arr[top]=val;
    }
}

void pop()
{
    if(top<0)
    {
        cout<<"stack underflow";
    }
    else{
        cout<<"popped element is "<<arr[top]<<endl;
        top--;
    }
}

void display()
{
    if(top>=0)
    {
        for(int i=top;i>=0;i--)
        {
            cout<<arr[i]<<" ";
        } cout << endl;
    }
}
int main()
{
    push(1);
    push(7);
    push(99);
    push(3);
    push(55);
    push(8);
    pop();
    display();
}