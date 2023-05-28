#include<iostream>
#include<string>
#include<conio.h>

using namespace std;


string EnterPassword(){
    string numstg="";
    char ch=getch();

    while (ch != '\r')  
    {
        cout << '*';
        numstg += ch;
        ch = getch();
    }

    return numstg;
}

int main(){

    //default pass
    int ch;
    char ans = 'y';
    string pass="admin123";
    string input;
    string newpass;
    string passw;
    string password;
    string temp;
  
    while(ans=='y'){
	cout<<"enter no to perform:-"<<endl;
    cout<<"   1.Default password to login\n   2.Password in plain text to login\n   3.Password transmitted in plain text to login "<<endl;
    cin>>ch;
    switch(ch){

        case 1:
        
        cout<<"Enter password to login: ";
        cin>>input;

        if(input==pass){

            cout<<"Login successful"<<endl;
        cout<<"Please set new password: ";
        cin>>newpass;
        cout<<"Password successfully changed.You have been logged out"<<endl;
        
        cout<<"ENTER PASSWORD TO LOGIN"<<endl;
        cin>>input;
        if(input==newpass){


            cout<<"Login successful"<<endl;
            
        }
        else{
            cout<<"Login unsuccessful"<<endl;
            return 0;
        }
            
        }
        else{
            cout<<"Login unsuccessful"<<endl;
          
        }
       
        break;

        case 2:
        cout << "Enter your password! ";
        password = EnterPassword();
        cout << endl << "password:" << password << endl;
        break;

        case 3:
         
        cout<<"Enter your password:";
        cin>>passw;
        int n=passw.length();
        for (int i = 0; i < n / 2; i++){
            swap(passw[i], passw[n - i - 1]);

        }
        cout<<passw;
        break;

    }
    cout<<"\nDo you want to perform another operation?(y/n)";
    cin>>ans;
    
}

}
