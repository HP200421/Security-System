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
                cout<<"|           Register          |"<<"\n";
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

                    cout<<"-----Registration Successful-----"<<"\n";
                }

                break;
            }

            case 2:{
                i=0;

                cout<<"_______________________________"<<"\n";
                cout<<"|                             |"<<"\n";
                cout<<"|            Login            |"<<"\n";
                cout<<"|_____________________________|"<<"\n"<<"\n"; 

                ifstream if1;
                if1.open("file.text");
                cout<<"Please enter username: ";
                cin>>user;
                cout<<"Please enter the password: ";
                cin>>pass;

                if(if1.is_open()){
                    while(!if1.eof())
                    {
                        while(getline(if1,text)){
                            istringstream iss(text); 
                            iss>>word;
                            creds[i]=word;
                            i++;  
                        }

                        if(user == creds[0] && pass == creds[1])
                        {
                            cout<<"-----Login Successful-----"<<"\n"<<"\n";

                            cout<<"Details: "<<"\n";

                            cout<<"Username: "+name<<"\n";
                            cout<<"Password: "+pass<<"\n";
                            cout<<"Age: "+age<<"\n";
                        }
                        else
                        {
                            cout<<"\n"<<"\n";

                            

                            cout<<"       Incorrect Credentials "<<"\n";

                            cout<<"________________________________________"<<"\n";
                            cout<<"|                                      |"<<"\n";
                            cout<<"|        1. Press 2 to Login           |"<<"\n";
                            cout<<"|        2. Press 3 to Change Password |"<<"\n";
                            cout<<"|______________________________________|"<<"\n"<<"\n"; 
                            break;
                        }
                    }
                }

                break;
            }
        }        
    }while(choice != 4);
    return 0;
}