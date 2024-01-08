#include<iostream>

using namespace std;

int add(int a, int b)
{
    return a+b;
}

int main()
{
    int (*operation)(int, int);
    operation = add;
    int result = operation(45,45);
    
    cout<<"value at result is = "<<result;

}