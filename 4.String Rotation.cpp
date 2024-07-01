/******************************************************************************
String Rotation:Assumeyou have a method isSubstringwhich checks if oneword is a substring
of another. Given two strings, sl and s2, write code to check if s2 is a rotation of sl using only one
call to isSubstring (e.g., "waterbottle" is a rotation of"erbottlewat"). 
*******************************************************************************/
#include <iostream>
#include <string>

using namespace std;

bool isSubstring(const string &s1, const string &s2) {
    return s1.find(s2) != string::npos;
}

bool isRotation(const string &s1, const string &s2) {
    if (s1.length() != s2.length() || s1.empty()) {
        return false;
    }
    string concatenated = s1 + s1;
    return isSubstring(concatenated, s2);
}

int main() {
    string s1 = "waterbottle";
    string s2 = "erbottlewat";

    if (isRotation(s1, s2)) {
        cout << s2 << " is a rotation of " << s1 << endl;
    } else {
        cout << s2 << " is not a rotation of " << s1 << endl;
    }

    return 0;
}
