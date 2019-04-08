#include <iostream>
using namespace std;

void print(const int *const, size_t);
int* combine(const int *const, size_t, const int *const, size_t);

int main()
{
    int array1[] {1, 2, 3, 4, 5};
    int array2[] {10, 20, 30};
    
    print(array1, 5);
    print(array2, 3);
    int* newArr = combine(array1, 5, array2, 3);
    print(newArr, 15);
    delete [] newArr;
}

void print(const int *const array, size_t size)
{
    for (size_t i = 0; i < size; ++i)
        cout << *(array+i) << " ";
    cout << endl;
}

int* combine(const int *const arr1, size_t size1, const int *const arr2, size_t size2)
{
    int* pArr = new int[size1*size2];
    int ndx = 0;
    for (size_t i2 = 0; i2 < size2; ++i2)
        for (size_t i1 = 0; i1 < size1; ++i1)
            pArr[ndx++] = arr1[i1] * *(arr2+i2);
    return pArr;
}