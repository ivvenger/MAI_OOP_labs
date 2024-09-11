#include <iostream>
#include <string>

using namespace std;

string removeVowels(const string& s) {
    string res;
    for (char lit : s) {
        if (lit != 'a' && lit != 'e' && lit != 'i' && lit != 'o' && lit != 'u' && lit != 'y' &&
            lit != 'A' && lit != 'E' && lit != 'I' && lit != 'O' && lit != 'U' && lit != 'Y') {
                res += lit;
        }
    }
    return res;
}


int main() {
    string s;
    cout << "Введите строку: ";
    getline(cin, s);
    string output = removeVowels(s);
    cout << "Результат: " << output << endl;
    return 0;
}