#include <iostream>
#include <fstream>
#include <string.h>
#include <cstdio>


using namespace std;

void ESM();
void balance(ifstream &in);
void update(ifstream &in);
void payment(ifstream &in);
void signUp(ofstream &in);

int main()
{

    ESM(); // calls the fuction ESM to display the program's name

   int choice;
   int option;
   char ch;
   ifstream in;
   ofstream out;

   cout << "\n\nWelcome to Edir management system \n\n"<<endl;
   cout << "Press [1] to Sign up \nPress [2] if you have already signed up \nPress [3] to Exit " << endl; // gives the user the option to register or login
   cin>>choice; // receives the choice made by the user

   cout<<endl;
   cout<<endl;

   if(choice==1)
        signUp(out); // calls the function signUp to perform the registration process

   else if(choice==2)
    {
     cout << "\nPress [1] to check your Balance"
          << "\nPress [2] to get your Payment" << endl;
     cin >> option; // receives the option made

        if(option==1)
            {
                in.open("yedirmezgeb.txt"); // create a file named yedirmezgeb with a.txt extension
                update(in); // calls the update function to update the unpaid and punishment amounts
                in.close();

                cout << "Press D if you are Done or else press any button" << endl; // user is supposed to enter any letter other than D here
                cin >> ch; // receives your character choice

                    while(toupper(ch)!= 'D')
                        {
                            in.open("yedirmezgeb.txt");
                            balance(in); // calls the balance function to display your balance
                            in.close();

                            cout << "Press D if you are Done or else press any button" << endl; // press D if your done
                            cin >> ch;
                        }
            }

     else if(option==2)

     {
        payment(in); // calls the payment function to show the user the payment they will get
     }

    else if(choice==3)
        return 0;

    else
        cout << "Invalid entry please try again! " << endl; // user entered number other than mentioned

     return 0;
}
}




void ESM()
{
    cout << "*************************************************************************************************\n\n";
    cout << "                            EDIR MANAGEMENT SYSTEM        \n\n";
    cout << "*************************************************************************************************\n\n";

}




void update(ifstream &in)
{

  string firstName,lastName;
  int unpaid, punishment;
  in >> firstName >> lastName >> unpaid >> punishment;
  ofstream write("another.txt"); // create a file where we will write our files

  while(!in.eof())
  {
      write << firstName << " " << lastName << " " << ++unpaid << " " << ++punishment << endl; // adds the unpaid amount
      in >> firstName >> lastName >> unpaid >> punishment; // saves the updated data
  }

  in.close();
  write.close();

  remove("yedirmezgeb.txt");
  rename("another.txt","yedirmezgeb.txt"); // rename our file to previous one

}




void balance(ifstream &in)
{
    string firstName,lastName,FirstName,LastName;
    int  counter =0,unpaid, punishment, balance;
    cout << "Please enter your full name" << endl; // Your full name is used as a password
    cin >> firstName >> lastName;
    in >> FirstName >> LastName >> unpaid >> punishment;

    while(!in.eof())
    {
        if(firstName==FirstName && lastName==LastName)
        {
            counter++;
            break;
        }
        else
           in >> FirstName >> LastName >> unpaid >> punishment;
    }
    in.close();

    if(counter==1)
    {
        balance = (12+((unpaid-1)*12)+((punishment-1)*5));
        cout << "Your balance is : " << balance << endl;
    }
    else
        {
            cout<<"You are not a Member"<<endl;

        }
    ofstream out("temp.txt");
    in.open("yedirmezgeb.txt");

    if(counter==1)
    {
        int i=0;
        in >> FirstName >> LastName >> unpaid >> punishment;
        while(!in.eof())
        {
            if(firstName==FirstName && lastName==LastName)
                out << firstName << " " << lastName << " " << i << " " << i << endl;
            else
               out << FirstName << " " << LastName << " "<< unpaid << " " << punishment << endl;
               in >> FirstName >> LastName >> unpaid >> punishment;

        }

    in.close();
    out.close();
    remove("yedirmezgeb.txt");
    rename("temp.txt","yedirmezgeb.txt");
    }
}




void payment(ifstream &in)
{
 int m=0 ;
 char choice;
 string firstname, lastname, Firstname, Lastname;

 cout << "Enter M if you are a member or S if you are a spouse of the member" << endl;
 cin >> choice;

 if(toupper(choice)=='M')
 {
    in.open("member.txt");

       if(!in.is_open())
        {
           cout << "Failed to open the file" << endl;

        }

    cout << "Enter your full name: " << endl;
    cin >> firstname >> lastname;

    while(!in.eof())
    {
        in >> Firstname >> Lastname;
        if(firstname==Firstname)
        {
            if(lastname==Lastname)
                m++;
            break;
        }
        else
            continue;
    }

    if(m==1)
        cout << "You got 5000 birr " << endl;

    else
        cout << "You are not a Member" << endl;
 }

 if(toupper(choice)=='S')
 {
     in.open("spouse.txt");

     if(!in.is_open())
     {
     cout << "Failed to open the file";
     }

    cout << "Enter your name" << endl;
    cin >> firstname >> Lastname;

    while(!in.eof())
    {
        in >> Firstname >> Lastname;

        if(firstname == Firstname)
        {
            if(lastname == Lastname)
                m++;
            break;
        }
        else
            continue;
    }

    if(m==1)
        cout << "You got 5000" << endl;
    else
        cout << "Sorry, you are not in the member's list" << endl;
 }

    if(m=1)
    {
       ofstream out("temp.txt");// create temporary file to store the remaining data

        while(!in.eof())
        {
            string nam1, nam2;//a variable to read names from the file
            in >> nam1 >> nam2;

            if(( firstname == nam1 && lastname == nam2 )|| (firstname == nam1 && lastname == nam2))
                continue;
            else
               out << nam1 << " " << nam2 << endl;
        }

    out.close();
    in.close();

    if(toupper(choice)=='S')
     {
        remove("spouse.txt");
        rename("temp.txt","spouse.txt");
     }

    else
    {
         remove("member.txt");
         rename("temp.txt","member.txt");
    }
}
}



void signUp(ofstream &in)
{
    string firstName, lastName, Sfirstname, Slastname;
    int confirmation;
    cout << "Please enter your full name: " << endl;  // asks the user to enter their full name
    cin >> firstName >> lastName; // receives the user's full name
    cout << "Please enter your spouse's full name: "<<endl; // asks the user to enter their spouse's full name
    cin >> Sfirstname >> Slastname; // receives the spouse's full name
    cout << "\nUser name - \"" << firstName << " "<< lastName << "\"\nConfirm? \n\n[1] Yes\n[2] No" << endl; // asks the user if they have entered the right name
    cin >> confirmation;

   while(confirmation==2)
    {
          cout << " Please enter your full name: " << endl;  // asks the user to enter their full name
          cin >> firstName >> lastName; // enters its full name
          cout << "\nUser name - \"" << firstName << " "<< lastName << "\"\nConfirm? \n\n[1] Yes\n[2] No" << endl; // asks the user if they have entered the right name
          cin >> confirmation; // enters the option based on the given instruction
    }

   if (confirmation == 1)
    {
         in.open("yedirmezgeb.txt", ios::app); // creates a .txt form file where the name of the members, balance and punishments  will be saved
         in << firstName << " " << lastName << " " << 0 << " " << 0 <<endl; // adding the name and the amount of money and unpaid amount they have
         in.close(); // closes the file we opened

         in.open("member.txt", ios::app); // creates a .txt file were members will be saved
         in << firstName << " " << lastName <<endl; // adds the full name of the members
         in.close();

         in.open("spouse.txt", ios::app);
         in << Sfirstname << " " << Slastname << endl; //writes the spouse's full name to the text file
         in.close();

         cout << "\n\nThank you for signing up!" << endl;
         cout << "You are now a Member"<< endl;
    }
    else
        cout << "Invalid input please try again" << endl; // outputs invalid input please try again when a user presses a number other than instructed
}




