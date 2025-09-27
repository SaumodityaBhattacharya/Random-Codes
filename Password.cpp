#include<iostream>
#include<string>
using namespace std;

bool isValid(string s) {
    bool hasUpper = false;
    bool hasLower = false;
    bool hasDigit = false;
    bool hasSpecial = false;
    string specialChars = "@#$ _";
    if (specialChars.find(s[0]) != string::npos || specialChars.find(s[s.length() - 1]) != string::npos) {
        return false;
    }

    for (char c : s) {
        if (isupper(c)) hasUpper = true;
        else if (islower(c)) hasLower = true;
        else if (isdigit(c)) hasDigit = true;
        else if (specialChars.find(c) != string::npos) hasSpecial = true;
    }

    return hasUpper && hasLower && hasDigit && hasSpecial;
}

int main() {
    string password;
    getline(cin, password);
    int s = password.length();

    if (!isValid(password)) {
        cout << password << " is not acceptable";
    }
    else if (s >= 8 && s < 12) {
        cout << password << " is moderate";
    }
    else {
        cout << password << " is good";
    }

    return 0;
}
