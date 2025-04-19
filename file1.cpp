#include <iostream>
using namespace std;
void swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = a*
}
int main()
{
    int a = 5;
    int b = 7;
    cout << &a << endl;
    cout << &b << endl;
    swap(&a, &b);
}