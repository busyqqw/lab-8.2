#include <iostream>
#include <string>

using namespace std;

string ConvertToLowercase(const string& str) {
    string result;

    for (char ch : str) {
        // Заміна малих букв на великі
        char modifiedChar = islower(static_cast<unsigned char>(ch)) ?
            static_cast<char>(toupper(static_cast<unsigned char>(ch))) : ch;

        result += modifiedChar;
    }

    return result;
}

int main() {
    string str;
    cout << "Enter string:" << endl;
    getline(cin, str);

    string modifiedStr = ConvertToLowercase(str);

    cout << "Modified string: " << modifiedStr << endl;

    return 0;
}
