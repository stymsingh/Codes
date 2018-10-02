#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    std::cout << "Test Cases: " << '\n';
    std::cin >> t;
    while(t--)
    {
        std::string sentence;
        int i;
        int vowels = 0;
        std::cout << "Enter a sentence: " << '\n';
        std::cin.ignore();
        std::getline(std::cin, sentence);
        for (i = 0; sentence[i] != '\0'; i++)
        {
            if (sentence[i] == 'a' || sentence[i] == 'A' || sentence[i] == 'i' || sentence[i] == 'I' || sentence[i] == 'u'|| sentence[i] == 'U'||sentence[i] == 'e' || sentence[i] == 'E' || sentence[i] == 'o' || sentence[i] == 'O')
            {
                vowels = vowels + 1;
            }
        }
        std::cout << "There are " << vowels <<" vowels in the given sentence" << '\n';
    }
    return 0;
}
