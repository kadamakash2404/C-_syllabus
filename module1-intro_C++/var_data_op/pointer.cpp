#include<iostream>

using namespace std;


int sum(int a, int b)
   {
       return a+b;
   }
int main()
{
    int val = 10;
    int data = 45.35;
    // null pointer
    int *nullpter = NULL;
    nullpter = &val;
    cout<<"nullptr = "<<*nullpter<<endl;

    // void pointers
    void* voidptr;
    voidptr = &val;
    cout<<"voidptr = "<<*(int*)voidptr<<endl;

    // pointer to pointer or doubble pointer
    int* intptr = &val;
    int** douptr = &intptr;
    cout<<"intptr = "<<intptr<<endl;
    cout<<"douptr = "<<**douptr<<endl;

    // constant pointer : pointer whose address value cannot be chabged after initalization
    int* const constptr = &val;
    // constptr = &data : is invalid
    cout<<"constptr = "<<constptr<<endl;

    // pointer to constant : pointer that can change thair address but can not change the value 
    // they are pointing at
    const int* ptrtoconst = &val;
    // *ptrtoconst++; is invalid
    

    //pointer to function : pointer that holds address of function
    //                      useful for implementing callbacks and function pointer

   
    int ans = sum(5,10);
    int (*funcptr)(int,int) = &sum;
    cout<<"address of sum = "<<endl;


    return 0;
}