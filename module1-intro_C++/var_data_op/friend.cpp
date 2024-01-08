/*
In C++, the friend keyword is used to grant access to private or protected 
members of a class to another class or function. When a function or class is 
declared as a friend of another class, it can access the private and protected 
members of that class.
*/

#include<iostream>

using namespace std;

class myclass
{
    private :
    int privdata = 10;

    public :
    friend void friendfun(myclass obj);    
};

void friendfun(myclass obj)
{
    cout<<"priver data = "<<obj.privdata<<endl;
}

int main()
{
    myclass a;
    friendfun(a);
    return 0;
}