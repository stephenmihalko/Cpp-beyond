#include <iostream>
#include <string>
using namespace std;

int main()
{
    int favNum;
    std::cout << "Please enter your favorite number: ";
    std::cin >> favNum;
    std::cout << "My favorite number is " << favNum << " too!" << std::endl;
    
    
    string test1 {"ABCDEFG"};
    string test2 {test1, 0, 0};
    cout << test2 << endl;
    
    return 0;
}