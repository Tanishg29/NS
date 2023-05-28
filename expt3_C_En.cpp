#include <iostream>
using namespace std;
string encrypt(string text, int s)
{

	string result = "";
	for (int i = 0; i < text.length(); i++) {
		// Encrypt Uppercase letters
		if (isupper(text[i]))
			result += char(int(text[i] + s - 65) % 26 + 65);

		// Encrypt Lowercase letters
		else
			result += char(int(text[i] + s - 97) % 26 + 97);
	}
	return result;
}

int main()
{
	string text;
	cout<<"Enter text"<<endl;
	cin>>text;
	int s = 5;
	cout << "Text : " << text;
	cout << "\nShift: " << s;
	s = s%26; // ensuring that s lies between 0-25
	cout << "\nCipher: " << encrypt(text, s);
	return 0;
}

