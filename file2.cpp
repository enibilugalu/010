#include <iostream>
using namespace std;

int main() {
    int size;
    cout << "������� ������ ��������: ";
    cin >> size;
    int* array1 = new int[size];
    int* array2 = new int[size];
    cout << "������� �������� ��� �������1:" << endl;
    for (int i = 0; i < size; i++) {
        cin >> array1[i];
    }
    for (int i = 0; i < size; i++) {
        array2[i] = array1[i];
    }
    cout << "�������� �������2:" << endl;
    for (int i = 0; i < size; i++) {
        cout << array2[i] << " ";
    }
    cout << endl;
    delete[] array1;
    delete[] array2;
    return 0;
}
