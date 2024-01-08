/**
 * When you create a std::string object, memory is allocated dynamically to store 
 * the character data. This allocation allows the string to be flexible in size and 
 * adapt to changes dynamically during program execution. The std::string object 
 * manages its memory allocation and deallocation internally, which means you don't 
 * have to worry about memory management explicitly.
*/


#include<iostream>

using namespace std;

int main()
{
    string name = "Aakldlakminfinsdlkdkfjlskjflksjflksjflksjdflkjdslkfjlkdsjflksjflkjflksjflsjlfjsakjaslkdjklajdlkajdlajdlkjsdlksjdlkajdlksajdlkajdlkajdlkadlkajdlkajdlkajdlkajdlkajsldjsalkdjsalkdjlkjdlksajdlasjdlkajdlajdlkjaslkdjalksdjlkasjdksajdlkajdlkajdlkjaldkjalkdjalkjdlkasjdlkasjdlkajsldksajlkdalskdjlsakjdajsdlkd";
    cout<<"size of string name length  = "<<name.size()<<endl;
    cout<<name<<endl;
    return 0;

}