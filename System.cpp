#include<iostream>
#include<fstream>
#include<sstream>
#include<string>

using namespace std;

int main()
{
    int choice, i=0;
    string text, old, password0, password1, password2, pass, name, age, user, word, word1;
    string creds[2], cp[2];

    cout<<"        Security System "<<"\n";

    cout<<"_______________________________"<<"\n";
    cout<<"|                             |"<<"\n";
    cout<<"|        1. Register          |"<<"\n";
    cout<<"|        2. Login             |"<<"\n";
    cout<<"|        3. Change Password   |"<<"\n";
    cout<<"|        4. End Program       |"<<"\n";
    cout<<"|_____________________________|"<<"\n"<<"\n"; 

    do
    {
        cout<<"\n"<<"\n";

        cout<<"Enter your choice: "<<"\n";
        cin>>choice;

        switch(choice)
        {
            case 1:{
                cout<<"_______________________________"<<"\n";
                cout<<"|                             |"<<"\n";
                cout<<"|        1. Register          |"<<"\n";
                cout<<"|_____________________________|"<<"\n"<<"\n"; 
                cout<<"Please enter username: ";
                cin>>name;
                cout<<"Please enter the password: ";
                cin>>password0;
                cout<<"Please enter your age: ";
                cin>>age;

                ofstream of1;
                of1.open("file.txt");
                if(of1.is_open()){
                    of1<<name<<"\n";
                    of1<<password0<<"\n";

                    cout<<"Registration Successful"<<"\n";
                }

                break;
            }
        }        
    }while(choice != 4);
    return 0;
}