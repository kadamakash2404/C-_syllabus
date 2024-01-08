#include<iostream>

using namespace std;

int main()
{
    int* ptr = new int;
    *ptr = 20;
    cout<<"address of ptr = "<<ptr<<endl;
    delete ptr;
    return 0;
}