#include<iostream>

using namespace std;

// inline function to calculate square

inline int square(int x)
{
    return x*x;
}

int main()
{
    int num = 5;
    cout<<square(num)<<endl;
    return 0;
}