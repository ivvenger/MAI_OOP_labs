#include <iostream>
#include "include/laba_1.h"

using namespace std;

int main() {
    string s;
    cout << "Введите строку: ";
    getline(cin, s);
    string output = removeVowels(s);
    cout << "Результат: " << output << endl;
    return 0;
