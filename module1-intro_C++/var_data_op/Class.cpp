#include<iostream>

using namespace std;

// we can modify members of public class outside of class

class myclass
{
    // privet
    private :
    int privet_Val = 10;

    //public
    public :
    int public_val = 20;

     //constructor 
    myclass()
    {
        cout<<"constroctor is called"<<"with the value = "<<5<<endl;
    }

    //destructor 
    ~myclass()
    {
        cout<<"destructor is called";
    }

//this members functions of public class can be ussed to access privet members from outside of class
    void setter(int val)
    {
        privet_Val = val;
    }

    int getter()
    {
        return  privet_Val;
    }

    //protected : to access it it is same as privet
    protected :
    int protected_Val = 30;
};



int main()
{
    myclass a;
    a.setter(45);
    cout<<"privet member is = "<<a.getter()<<endl; 
    return 0;
}