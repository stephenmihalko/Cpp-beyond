#include <iostream>
#include <string>
using namespace std;

int main()
{
    string alphabet {"abcdefghijklmnopqrstuvwxyz0123456789 ABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    string code {"m8fk3Dlcj6CEn1rb2eoFqAgdLs9BNTGZ0SYpRUX MWQiKOVwy5HPt4aJzxv7Ihu"};
    
    string input;
    
    cout << "Please enter a word to encode: ";
    getline(cin, input);
    
    for (size_t i = 0; i < input.length(); ++i)
        input[i] = code[alphabet.find(input[i])];
        
    cout << "Your encoded word is " << input << endl;
}