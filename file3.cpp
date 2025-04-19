#include <iostream>
using namespace std;

int main() {
    const char* str1 = "Hallo";
    const char* str2 = "world!";

    char* comb= new char[12];

    char* ptr = comb;

    while (*str1) *ptr++ = *str1++; 
    *ptr++ = ' ';                   
    while (*str2) *ptr++ = *str2++; 
    *ptr = '\0';                    

    cout << comb << endl;

    delete[] comb;
    return 0;
}