// Letter pyramid
// By S. Mihalko

#include <iostream>
#include <string>

using namespace std;

bool isPalindrome(string in)
{
    if (in.length() < 2)
        return true;
    else
    {
        int len = in.length();
        return in[0] == in[len-1] && isPalindrome(in.substr(1, len-2));
    }
}

int main()
{
    cout << "Please enter a string: ";
    
    string input;
    getline(cin, input);
    
    /* Go through each character in the string, but use indexing
       because I want to use those indexes inside the loop */
    for (size_t i = 0; i < input.length(); ++i)
    {
        // put the middle character into the string
        string thisRow (input, i, 1);
        // create a string of spaces to add to the front later
        string spaces (input.length()-i, ' ');
        
        // this loop runs from everything BEFORE the "middle character" to the beginning
        for (int j = i-1; j >= 0; --j)
            // add the character to both ends of the current string
            thisRow = input[j] + thisRow + input[j];
        cout << isPalindrome(thisRow) << endl;
        cout << spaces << thisRow << endl;
    }
    
    cout << isPalindrome("hello") << endl;
    return 0;
}