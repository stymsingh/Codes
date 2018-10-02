#include<bits/stdc++.h>
using namespace std;
int main()
{
    std::string str;
    cout<<"Enter String: ";

    // Taking string input from the user
    std::getline(cin, str);

    // Displaying string
    cout<<"Initial string is: ";
    cout<< str << endl;

    std::cout << "/**************************************/" << '\n';

    // using push_back function
    str.push_back('s');

    // Displaying string
    cout<<"Added string is: ";
    cout<< str << endl;

    std::cout << "/*****************************************/" << '\n';

    // using pop_back function
    str.pop_back();

    // Displaying string
    cout<<"deleted string is: ";
    cout<< str << endl;

    std::cout << "/****************************************/" << '\n';

    // capacity() function
    cout << "The capacity of string is : ";
    cout << str.capacity() << endl;

    std::cout << "/****************************************/" << '\n';

    // Resizing string using resize()
    str.resize(13);

    // Displaying string
    cout << "The string after resize operation is : ";
    cout << str << endl;

    std::cout << "/****************************************/" << '\n';

    // capacity() function
    cout << "The capacity of string is : ";
    cout << str.capacity() << endl;

    std::cout << "/****************************************/" << '\n';
}
