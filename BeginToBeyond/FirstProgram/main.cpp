#include <iostream>
#include <string>
using namespace std;

int main()
{
    int favNum {42};
    int *pFavNum = &favNum;
    
    cout << favNum << endl;
    cout << pFavNum << endl;
    cout << &favNum << endl;
    cout << *pFavNum << endl;
    
    return 0;
}