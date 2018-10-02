#include<bits/stdc++.h>
using namespace std;

// recursive function to print reverse of a string
void reverse(char* str)
{
    if(*str)
    {
        reverse(str+1);
        std::cout << *str;
    }
}

int main()
{
    char a[] = "Geeks for Geeks";
    reverse(a);
    return 0;
}
