#include <iostream>
using namespace std;
void swap (int* arr1, int* arr2)
{
    //int temp = *arr1;
    //*arr1 = *arr2;
}
int main2()
{
    int size1;
    cout << "enter size array 1: ";
    cin >> size1;
    if (size1 <= 0) {
        cout << "error." << endl;
        return 0;
    }

    int size2;
    cout << "enter size array 2: ";
    cin >> size2;
    if (size2 <= 0) {
        cout << "error." << endl;
        return 0;
    }

    int* arr1 = new int[size1];
    for (int i = 0; i < size1; i++)
    { 
        cout << "enter array1 elements" << i + 1 << ": ";
        cin >> arr1[i];
        cout << "arr1:" << &arr1 << endl;
    }
    int* arr2 = new int[size2];
    for (int i = 0; i < size2; i++)
    {
        cout << "enter array2 elements" << i + 1 << ":";
        cin >> arr2[i];
        cout << "arr2:" << &arr2 << endl;
    }
}

//void copy(int* arr1, int* arr2)
//{
//    int temp = *arr1;
//    *arr1 = *arr2;
//}