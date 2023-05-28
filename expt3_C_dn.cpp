#include <iostream>
using namespace std;
string encrypt(string text,int s)
{
	string result="";
	for(int i=0;i<text.length();i++)
	{
	//Decrypt Uppercase letters
		if(isupper(text[i]))
			result+=char(int(text[i]+s-65)%26 +65);
	//Decrypt Lowercase letters
	else
		result+=char(int(text[i]+s-97)%26 +97);
	}
	return result;
}

int main()
{
	string text;
	cout<<"Enter text to  decrypt"<<endl;
	cin>>text;
	int s = 5;
	cout<<"Text :"<<text;
	cout<<"\nShift:" << s;
	s = s%26;
	cout<<"\nCipher:"<<encrypt(text, 26-s);
	return 0;
}

