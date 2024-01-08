#include<iostream>

using namespace std;

int add(int a, int b)
{
    return a+b;
}

int add(int a, int b, int c)
{
    return a+b+c;
}

int main()
{
    cout << "first add 5+10 = "<<add(5,10)<<endl;
    cout << "second add 5+10+50 = "<<add(5,10,50)<<endl;
    return 0;
}