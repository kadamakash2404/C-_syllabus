#include<iostream>

using namespace std;

int main()
{
    int a,b;

    // arithmatic operaters
    int sum = a+b;
    int diff = a-b;
    int product = a*b;
    int quotient = a/b;
    int reminder = a%b;

    // relational operaters
    if(a==b);
    if(a!=b);
    if(a<b);
    if(a>b);
    if(a<=b);
    if(a>=b);

    // Logical operaters
    bool result = a && b;
    result = a || b;
    result = !a;

    // Assignment operaters
    a=b;
    a+=b;
    a-=b;
    a*=b;
    a/=b;
    a%=b;

    // increment and decremnet operaters
    a++;
    a--;
    ++a;
    --a;

    // Bitwise operaters
    int bit = a & b;
    bit = a | b;
    bit = a ^ b;
    bit = ~a;
    bit = a<<2;
    bit = a>>2;

    // ternary operaters;
    a==b?a=1:a=0;
    return 0;
}