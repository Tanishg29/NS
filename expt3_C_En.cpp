#include <iostream>
using namespace std;

string encrypt(string text, int s)
{
    string result = "";
    for (int i = 0; i < text.length(); i++) {
        // Encrypt Uppercase letters
        if (isupper(text[i]))
            result += char(int(text[i] + s - 'A') % 26 + 'A');

        // Encrypt Lowercase letters
        else if (islower(text[i]))
            result += char(int(text[i] + s - 'a') % 26 + 'a');

        // Keep non-alphabetic characters as they are
        else
            result += text[i];
    }
    return result;
}

int main()
{
    string text;
    cout << "Enter text: ";
    getline(cin, text); // Read entire line of input

    int s = 5;
    cout << "Text: " << text << endl;
    cout << "Shift: " << s << endl;
    s = s % 26; // Ensuring that s lies between 0-25
    cout << "Cipher: " << encrypt(text, s) << endl;

    return 0;
}
